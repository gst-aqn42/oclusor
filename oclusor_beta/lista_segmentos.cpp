#include "lista_segmentos.hpp"

ListaSegmentos::ListaSegmentos()
{
    head = nullptr;
    tamanho = 0;
}

ListaSegmentos::ListaSegmentos(const ListaSegmentos& outra)
{
    head = nullptr;
    tamanho = 0;
    Segmento* atual = outra.head;
    while (atual != nullptr)
    {
        inserir(new Segmento(atual->id, atual->inicio, atual->fim));
        atual = atual->proximo;
    }
}

ListaSegmentos& ListaSegmentos::operator=(const ListaSegmentos& outra)
{
    if (this != &outra)
    {
        limpar();
        Segmento* atual = outra.head;
        while (atual != nullptr)
        {
            inserir(new Segmento(atual->id, atual->inicio, atual->fim));
            atual = atual->proximo;
        }
    }
    return *this;
}

ListaSegmentos::~ListaSegmentos()
{
    limpar();
}

void ListaSegmentos::inserir(Segmento* seg)
{
    if (head == nullptr)
    {
        head = seg;
    }
    else
    {
        Segmento* atual = head;
        while (atual->proximo != nullptr)
        {
            atual = atual->proximo;
        }
        atual->proximo = seg;
    }
    tamanho++;
}

void ListaSegmentos::remover(Segmento* anterior, Segmento* atual)
{
    if (anterior == nullptr)
    {
        head = atual->proximo;
    }
    else
    {
        anterior->proximo = atual->proximo;
    }
    delete atual;
    tamanho--;
}

void ListaSegmentos::limpar()
{
    Segmento* atual = head;
    while (atual != nullptr)
    {
        Segmento* proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
    head = nullptr;
    tamanho = 0;
}

int ListaSegmentos::get_tamanho()
{
    return tamanho;
}

Segmento* ListaSegmentos::get_head()
{
    return head;
}