#include "objeto.hpp"
#include <iostream>
#include <string>

// Construtor com passagem por parâmetro
// Construtor vazio

Object::Object()
{
}

Object::Object(double entry_coord_x, double entry_coord_y, double entry_length)
{
  coord_x = entry_coord_x;
  coord_y = entry_coord_y;
  length = entry_length;
}

// Seta novas coordenadas para x
void Object::set_coord_x(double new_coord_x)
{
  this->coord_x = new_coord_x;
}

// Seta novas coordenadas para y
void Object::set_coord_y(double new_coord_y)
{
  this->coord_y = new_coord_y;
}

// Seta novas coordenadas para largura
void Object::set_length(double new_length)
{
  this->length = new_length;
}

// Busca o valor de x
double Object::get_coord_x()
{
  return this->coord_x;
}

// Busca o valor de y
double Object::get_coord_y()
{
  return this->coord_y;
}

// Busca o valor da largura
double Object::get_length()
{
  return this->length;
}
