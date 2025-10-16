#ifndef OBJETO_HPP
#define OBJETO_HPP

class Objeto
{
private:
    int identifier;
    double coord_x;
    double coord_y;
    double length;

public:
    Objeto();
    Objeto(int id, double x, double y, double l);
    
    int get_identifier() const;
    double get_x() const;
    double get_y() const;
    double get_length() const;
    
    void set_x(double new_x) ;
    void set_y(double new_y);
    void set_length(double new_length);
    
    double get_inicio();
    double get_fim();
};

#endif