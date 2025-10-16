#include "gerenciador.hpp"
#include <iostream>
#include <sstream>

Gerenciador::Gerenciador() {}

void Gerenciador::processar_entrada()
{
    std::string linha;
    while (std::getline(std::cin, linha))
    {
        if (linha.empty() || linha[0] == '#') continue;
        processar_linha(linha);
    }
}

void Gerenciador::processar_linha(std::string linha)
{
    std::istringstream iss(linha);
    char tipo;
    iss >> tipo;
    
    if (tipo == 'O')
    {
        int id;
        double x, y, length;
        if (iss >> id >> x >> y >> length)
        {
            adicionar_objeto(id, x, y, length);
        }
    }
    else if (tipo == 'M')
    {
        int time, id;
        double x, y;
        if (iss >> time >> id >> x >> y)
        {
            mover_objeto(time, id, x, y);
        }
    }
    else if (tipo == 'C')
    {
        int time;
        if (iss >> time)
        {
            gerar_cena(time);
        }
    }
}

void Gerenciador::adicionar_objeto(int id, double x, double y, double length)
{
    Objeto* obj_existente = objetos.buscar_por_id(id);
    if (obj_existente)
    {
        obj_existente->set_x(x);
        obj_existente->set_y(y);
        obj_existente->set_length(length);
    }
    else
    {
        objetos.inserir(Objeto(id, x, y, length));
    }
}

void Gerenciador::mover_objeto(int time, int id, double new_x, double new_y)
{
    Objeto* obj = objetos.buscar_por_id(id);
    if (obj)
    {
        obj->set_x(new_x);
        obj->set_y(new_y);
    }
}

void Gerenciador::gerar_cena(int time)
{
    Cena cena(time);
    cena.aplicar_oclusao(objetos);
    cena.gerar_saida();
}