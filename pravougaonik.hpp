#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

class Pravougaonik{

private:
    double a;
    double b;

public:
    Pravougaonik(){a=2; b=4;}
    Pravougaonik(double aa,double bb){a=aa;b=bb;}
    Pravougaonik(Pravougaonik &c){ a=c.a; b=c.b;}

    void setA(double aa){a=aa;}
    void setB(double bb){b=bb;}

    double getA()const{return a;}
    double getB()const{return b;}

    double getO()const{return 2.0*a+2.0*b;}
    double getP()const{return a*b;}

};

#endif // PRAVOUGAONIK_HPP_INCLUDED
