#ifndef SIMPLE_LISTA_SEGMENTOS_HPP
#define SIMPLE_LISTA_SEGMENTOS_HPP

#include "segmento.hpp"

class SimpleListaSegmentos {
private:
    Segmento* segmentos;
    int capacidade;
    int tamanho;

    void redimensionar() {
        int novaCapacidade = capacidade * 2;
        Segmento* novoArray = new Segmento[novaCapacidade];
        
        for (int i = 0; i < tamanho; i++) {
            novoArray[i] = segmentos[i];
        }
        
        delete[] segmentos;
        segmentos = novoArray;
        capacidade = novaCapacidade;
    }

public:
    SimpleListaSegmentos() : capacidade(10), tamanho(0) {
        segmentos = new Segmento[capacidade];
    }
    
    ~SimpleListaSegmentos() {
        delete[] segmentos;
    }

    void inserir(const Segmento& seg) {
        if (tamanho >= capacidade) {
            redimensionar();
        }
        segmentos[tamanho] = seg;
        tamanho++;
    }

    void limpar() { tamanho = 0; }
    int getTamanho() const { return tamanho; }
    
    Segmento& operator[](int index) { return segmentos[index]; }
};

#endif