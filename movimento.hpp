#ifndef MOVIMENTO_HPP
#define MOVIMENTO_HPP

#include <string>
#include <iostream>

class Moviment{
  private:
  int time = 0;
  int identifier = 0;
  double coord_x = 0;
  double coor_y = 0;

  public:
  //Construtor com passagem por parâmetro
  Moviment(int entry_time, int entry_identifier, double entry_coord_x, double entry_coord_y);

  //Construtor vazio
  Moviment();

};

#endif

/*
Movimento: A linha do tipo movimento se inicia com M e contém uma marca de tempo
(um inteiro positivo), o identificador do objeto e a nova posição dele.
O seu formato é:
                M    <tempo>    <objeto>    <x>    <y>
                
                M     5         2           2.5     5
                M     6         1           4.5     2.5
                M     6         3           1.5     4
                M     7         6           6.5     4
                M     7         5           5.5     2
                M     7         4           4       1
*/ 