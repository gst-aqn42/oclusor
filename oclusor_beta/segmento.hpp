#ifndef SEGMENTO_HPP
#define SEGMENTO_HPP

class Segmento
{
public:
    int id;
    double inicio;
    double fim;
    Segmento* proximo;

    Segmento();
    Segmento(int i, double ini, double f);
    
    bool sobrepoe(Segmento* other);
    double comprimento();
};

#endif