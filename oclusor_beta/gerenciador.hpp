#ifndef GERENCIADOR_HPP
#define GERENCIADOR_HPP

#include "lista_objetos.hpp"
#include "cena.hpp"
#include <string>

class Gerenciador
{
private:
    ListaObjetos objetos;

public:
    Gerenciador();
    
    void processar_entrada();
    void processar_linha(std::string linha);
    
    void adicionar_objeto(int id, double x, double y, double length);
    void mover_objeto(int time, int id, double new_x, double new_y);
    void gerar_cena(int time);
};

#endif