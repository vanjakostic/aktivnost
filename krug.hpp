#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

class Krug{

private:
    double r;

public:

    Krug(double rr=1) {r = rr;}
    Krug(const Krug &c){
        r=c.r;
    }

    double getR()const {return r;}
    void setR(double rr){r=rr;}

    double getO(double rr)const{return r*2*M_PI;}
    double getP(double rr)const {return r*r*M_PI;}


};

