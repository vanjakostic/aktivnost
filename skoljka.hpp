#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke {plava,crvena,zelena};

class Skoljka{

private:
    BojaSkoljke boja;

public:
    Skoljka(){boja=plava;}
    Skoljka(BojaSkoljke bs) {boja=bs;}
    Skoljka(Skoljka &a){boja=a.boja; }

    BojaSkoljke getBoja(){return boja;}

    void setBoja(BojaSkoljke bs){boja=bs;}

    friend void IspisSkoljke(const Skoljka& );




};

#endif // SKOLJKA_HPP_INCLUDED
