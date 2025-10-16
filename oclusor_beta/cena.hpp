#ifndef CENA_HPP
#define CENA_HPP

#include "lista_objetos.hpp"
#include "lista_segmentos.hpp"

class Cena
{
private:
    int time;
    ListaSegmentos segmentos_visiveis;

public:
    Cena();
    Cena(int entry_time);
    
    void set_time(int new_time);
    int get_time();
    
    void aplicar_oclusao(ListaObjetos& objetos);
    void gerar_saida();
};

#endif