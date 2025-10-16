#include "objeto.hpp"

Objeto::Objeto() 
{
    identifier = 0;
    coord_x = 0;
    coord_y = 0;
    length = 0;
}

Objeto::Objeto(int id, double x, double y, double l) 
{
    identifier = id;
    coord_x = x;
    coord_y = y;
    length = l;
}

int Objeto::get_identifier() const
{
    return identifier;
}

double Objeto::get_x() const
{
    return coord_x;
}

double Objeto::get_y() const
{
    return coord_y;
}

double Objeto::get_length() const
{
    return length;
}

void Objeto::set_x(double new_x) 
{
    coord_x = new_x;
}

void Objeto::set_y(double new_y) 
{
    coord_y = new_y;
}

void Objeto::set_length(double new_length) 
{
    length = new_length;
}

double Objeto::get_inicio() 
{
    return coord_x - length / 2.0;
}

double Objeto::get_fim() 
{
    return coord_x + length / 2.0;
}