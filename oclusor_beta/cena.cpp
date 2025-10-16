#include "cena.hpp"
#include <iostream>

Cena::Cena()
{
    time = 0;
}

Cena::Cena(int entry_time)
{
    time = entry_time;
}

void Cena::set_time(int new_time)
{
    time = new_time;
}

int Cena::get_time()
{
    return time;
}

void Cena::aplicar_oclusao(ListaObjetos& objetos)
{
    objetos.ordenar_por_y();
    segmentos_visiveis.limpar();

    ListaSegmentos regiao_oclusa;

    NoObjeto* atual_objeto = objetos.get_head();
    while (atual_objeto != nullptr)
    {
        Objeto obj = atual_objeto->objeto;
        double inicio_obj = obj.get_inicio();
        double fim_obj = obj.get_fim();

        // Criar lista de segmentos para este objeto
        ListaSegmentos segmentos_objeto;
        segmentos_objeto.inserir(new Segmento(obj.get_identifier(), inicio_obj, fim_obj));

        // Aplicar oclusão dos objetos já processados
        Segmento* atual_oclusao = regiao_oclusa.get_head();
        while (atual_oclusao != nullptr)
        {
            ListaSegmentos novos_segmentos;

            Segmento* atual_segmento = segmentos_objeto.get_head();
            while (atual_segmento != nullptr)
            {
                if (!atual_segmento->sobrepoe(atual_oclusao))
                {
                    // Sem sobreposição - manter o segmento
                    novos_segmentos.inserir(new Segmento(atual_segmento->id, atual_segmento->inicio, atual_segmento->fim));
                }
                else
                {
                    // Com sobreposição - dividir o segmento
                    if (atual_segmento->inicio < atual_oclusao->inicio)
                    {
                        novos_segmentos.inserir(new Segmento(atual_segmento->id, atual_segmento->inicio, atual_oclusao->inicio));
                    }
                    if (atual_segmento->fim > atual_oclusao->fim)
                    {
                        novos_segmentos.inserir(new Segmento(atual_segmento->id, atual_oclusao->fim, atual_segmento->fim));
                    }
                }
                atual_segmento = atual_segmento->proximo;
            }

            // Substituir segmentos_objeto pelos novos segmentos
            segmentos_objeto.limpar();
            Segmento* novo_seg = novos_segmentos.get_head();
            while (novo_seg != nullptr)
            {
                segmentos_objeto.inserir(new Segmento(novo_seg->id, novo_seg->inicio, novo_seg->fim));
                novo_seg = novo_seg->proximo;
            }
            novos_segmentos.limpar();

            atual_oclusao = atual_oclusao->proximo;
        }

        // Adicionar segmentos visíveis à saída final
        Segmento* seg_visivel = segmentos_objeto.get_head();
        while (seg_visivel != nullptr)
        {
            if (seg_visivel->comprimento() > 0.0001) // Evitar erros de precisão
            {
                segmentos_visiveis.inserir(new Segmento(seg_visivel->id, seg_visivel->inicio, seg_visivel->fim));
            }
            seg_visivel = seg_visivel->proximo;
        }

        // Adicionar objeto atual à região ocluída
        regiao_oclusa.inserir(new Segmento(obj.get_identifier(), inicio_obj, fim_obj));
        
        atual_objeto = atual_objeto->proximo;
    }
}

void Cena::gerar_saida()
{
    Segmento* atual = segmentos_visiveis.get_head();
    while (atual != nullptr)
    {
        std::cout << "S " << time << " " << atual->id << " " 
                  << atual->inicio << " " << atual->fim << std::endl;
        atual = atual->proximo;
    }
}