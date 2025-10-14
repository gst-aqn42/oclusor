#ifndef CENA_HPP
#define CENA_HPP

#include <iostream>
#include <string>
#include "objeto.hpp"

class Cena{
  private:
  ArvoreBinaria<Objeto> objetos;

  int tempo;

};
#endif