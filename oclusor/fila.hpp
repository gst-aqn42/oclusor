#ifndef FILA_H
#define FILA_H

#include "objeto.hpp"
struct No;

// Fila de números inteiros.
class Fila
{

private:
  No *_first = nullptr;
  No *_last = nullptr;
  int _count = 0;

public:
  class ExcecaoFilaVazia
  {
  };

  Fila();

  // insere ao fim da fila
  void inserir(Object object)

      // retorna o primeiro item ou uma excessão
      Object primeiro() const;

  // Retorna o elemento no fim da fila.
  // Lança uma exceção do tipo EmptyException caso a fila esteja vazia.
  int ultimo() const;

  // Remove o elemento no início da fila.
  // Lança uma exceção do tipo EmptyException caso a fila esteja vazia.
  void RemoverPrimeiro();

  // Retorna o número de elementos na fila.
  int tamanho() const;

#endif