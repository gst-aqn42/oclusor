#ifndef SEGMENTO_HPP
#define SEGMENTO_HPP

class Segmento {
public:
    int id;
    double inicio;
    double fim;
    
    Segmento();
    Segmento(int i, double ini, double f);
    
    bool sobrepoe(const Segmento& other) const;
    double comprimento() const;
};

#endif