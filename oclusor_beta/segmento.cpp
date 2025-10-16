#include "segmento.hpp"

Segmento::Segmento()
{
    id = 0;
    inicio = 0;
    fim = 0;
    proximo = nullptr;
}

Segmento::Segmento(int i, double ini, double f)
{
    id = i;
    inicio = ini;
    fim = f;
    proximo = nullptr;
}

bool Segmento::sobrepoe(Segmento* other)
{
    return inicio < other->fim && fim > other->inicio;
}

double Segmento::comprimento()
{
    return fim - inicio;
}