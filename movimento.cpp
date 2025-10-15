#include "movimento.hpp"

// Construtor com passagem por parâmetro
Moviment::Moviment(int entry_time, int entry_identifier, double entry_coord_x, double entry_coord_y)
{
  this->time = entry_time;
  this->identifier = entry_identifier;
  this->coord_x = entry_coord_x;
  this->coor_y = entry_coord_y;
}

// Construtor vazio
Moviment::Moviment()
{
}