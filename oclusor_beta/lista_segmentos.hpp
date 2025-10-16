#ifndef LISTA_SEGMENTOS_HPP
#define LISTA_SEGMENTOS_HPP

#include "segmento.hpp"

class ListaSegmentos
{
private:
    Segmento* head;
    int tamanho;

public:
    ListaSegmentos();
    ListaSegmentos(const ListaSegmentos& outra);
    ListaSegmentos& operator=(const ListaSegmentos& outra);
    ~ListaSegmentos();

    void inserir(Segmento* seg);
    void remover(Segmento* anterior, Segmento* atual);
    void limpar();
    int get_tamanho();
    Segmento* get_head();
};

#endif