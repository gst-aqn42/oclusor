#ifndef LISTA_OBJETOS_HPP
#define LISTA_OBJETOS_HPP

#include "objeto.hpp"

class NoObjeto //poderia ser uma struct
{
public:
    Objeto objeto;
    NoObjeto* proximo;

    NoObjeto(Objeto obj);
};

class ListaObjetos
{
private:
    NoObjeto* head;
    int tamanho;

public:
    ListaObjetos();
    ~ListaObjetos();

    void inserir(Objeto obj);
    Objeto* buscar_por_id(int id);
    void ordenar_por_y();
    int get_tamanho();
    NoObjeto* get_head();
};

#endif