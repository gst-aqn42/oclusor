#ifndef OBJETO_HPP
#define OBJETO_HPP

#include <string>

class Object
{
private:
  int identifier = 0;
  double coord_x = 0;
  double coord_y = 0;
  double length = 0;

public:
  // Construtor com passagem por parâmetro
  Object(double entry_coord_x, double entry_coord_y, double entry_length);

  // Construtor vazio
  Object();

  // Seta novas coordenadas para x
  void set_coord_x(double new_coord_x);

  // Seta novas coordenadas para y
  void set_coord_y(double new_coord_y);

  // Seta novas coordenadas para largura
  void set_length(double new_length);

  // Busca o valor de x
  double get_coord_x();

  // Busca o valor de y
  double get_coord_y();

  // Busca o valor da largura
  double get_length();
};

#endif

/*
Objeto A linha do tipo objeto se inicia com O e contem o identificador do objeto, a sua
posição inicial (que é o centro do objeto) e a largura do mesmo.
O seu formato é:
                 O    <objeto>    <x>       <y>       <largura>

                 O      1          4        2.5       3
                 O      2          2.5      5         3
                 O      3          2        3         1
                 O      4          4        2         2
                 O      5          6        3         3
                 O      6          5        4         3
*/