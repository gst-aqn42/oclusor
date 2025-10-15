#ifndef CENA_HPP
#define CENA_HPP

#include <string>
#include "objeto.hpp"

class Cena{

  private:
  int time = 0;

  public:
  // Construtor com passagem por parâmetro
  Cena();

   // Construtor vazio
  Cena(int time);

};

#endif 

/*
Cena: A linha do tipo cena se inicia com C e contem apenas uma marca de tempo.
O seu formato é:
                  C   <tempo>
                  C     10

*/