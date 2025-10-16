#include "lista_objetos.hpp"

NoObjeto::NoObjeto(Objeto obj)
{
    objeto = obj;
    proximo = nullptr;
}

ListaObjetos::ListaObjetos()
{
    head = nullptr;
    tamanho = 0;
}

ListaObjetos::~ListaObjetos()
{
    NoObjeto* atual = head;
    while (atual != nullptr)
    {
        NoObjeto* proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
}

void ListaObjetos::inserir(Objeto obj)
{
    NoObjeto* novo_no = new NoObjeto(obj);
    
    if (head == nullptr)
    {
        head = novo_no;
    }
    else
    {
        NoObjeto* atual = head;
        while (atual->proximo != nullptr)
        {
            atual = atual->proximo;
        }
        atual->proximo = novo_no;
    }
    tamanho++;
}

Objeto* ListaObjetos::buscar_por_id(int id)
{
    NoObjeto* atual = head;
    while (atual != nullptr)
    {
        if (atual->objeto.get_identifier() == id)
        {
            return &(atual->objeto);
        }
        atual = atual->proximo;
    }
    return nullptr;
}

void ListaObjetos::ordenar_por_y()
{
    if (head == nullptr || head->proximo == nullptr) return;

    bool trocou;
    do
    {
        trocou = false;
        NoObjeto* anterior = nullptr;
        NoObjeto* atual = head;
        NoObjeto* proximo = head->proximo;

        while (proximo != nullptr)
        {
            if (atual->objeto.get_y() < proximo->objeto.get_y())
            {
                if (anterior == nullptr)
                {
                    head = proximo;
                }
                else
                {
                    anterior->proximo = proximo;
                }
                atual->proximo = proximo->proximo;
                proximo->proximo = atual;

                anterior = proximo;
                proximo = atual->proximo;
                trocou = true;
            }
            else
            {
                anterior = atual;
                atual = proximo;
                proximo = proximo->proximo;
            }
        }
    } while (trocou);
}

int ListaObjetos::get_tamanho()
{ 
    return tamanho; 
}

NoObjeto* ListaObjetos::get_head()
{ 
    return head; 
}