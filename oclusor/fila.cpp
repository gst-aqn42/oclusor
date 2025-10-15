#include "fila.hpp"


struct No
{
  Object new_object;
  No *proximo;
};

Fila::Fila()
{
  primeiro_ = nullptr;
  ultimo_ = nullptr;
}

void Fila::inserir(Object object)
{
  No *new_node = new No;
  new_node->new_object = object;
  new_node->proximo = nullptr;
  if (primeiro_ == nullptr)
  {
    primeiro_ = new_node;
    ultimo_ = new_node;
  }
  else
  {
    if (primeiro_ == ultimo_)
    {
      ultimo_ = new_node;
      primeiro_->proximo = ultimo_;
    }
    else
    {
      No *aux = new No;
      aux = ultimo_;
      ultimo_ = new_node;
      aux->proximo = ultimo_;
    }
  }
}

void Fila::RemoverPrimeiro()
{
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  No *apagar = new No;
  apagar = primeiro_;
  primeiro_ = apagar->proximo;
  delete (apagar);
}

Object Fila::

Object Fila::primeiro() const
{
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  return (*primeiro_).chave;
}

int Fila::ultimo() const
{
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  return (*ultimo_).chave;
}

int Fila::tamanho() const
{
  int count = 0;
  No *aux = new No;
  No *it = new No;
  it = primeiro_;
  while (it != nullptr)
  {
    count++;
    aux = it->proximo;
    it = aux;
  }
  return count;
}