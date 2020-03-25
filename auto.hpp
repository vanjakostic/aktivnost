#ifndef AUTO_HPP_INCLUDED
#define AUTO_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

enum StanjeAuta {ugasen,u_voznji,pokvaren};
class Auto{

private:
    Menjac m;
    Skoljka s;
    StanjeAuta stanje;
    int trenutnabrzina;

public:
    Auto (): m(),s(),stanje(ugasen),trenutnabrzina(0){}
    Auto (TipMenjaca tip,int brojbrzina, BojaSkoljke boja,StanjeAuta st,int tb): m(tip,brojbrzina), s(boja),stanje(st),trenutnabrzina(tb){}
    Auto (Auto &o): m(o.m),s(o.s),stanje(o.stanje),trenutnabrzina(o.trenutnabrzina){} //ne kompajlira se kad stavim const!


    bool upali(){
        if(stanje==ugasen){
            stanje=u_voznji;
            return true;
        }
        else
            return false;
    }

    bool ugasi(){
        if(stanje==u_voznji){
            stanje=ugasen;
            trenutnabrzina=0;
            return true;
        }
        else
            return false;
    }

    bool pokvari(){
        if(stanje==u_voznji || stanje==ugasen){
            stanje=pokvaren;
            trenutnabrzina=0;
            return true;
        }
        else
            return false;
    }

    bool popravi(){
        if(stanje==pokvaren){
            stanje=ugasen;
            trenutnabrzina=0;
            return true;
        }
        else
            return false;
    }

    bool povecajbrzina(){
        if((stanje==u_voznji) && (trenutnabrzina!= m.getBrojBrzina())){
            trenutnabrzina++;
            return true;
        }
        else
            return false;
    }
    bool smanjibrzinu(){
        if((stanje==u_voznji) && (trenutnabrzina!=0)){
            trenutnabrzina--;
            if(trenutnabrzina==0)
                stanje==ugasen;
            return true;
        }
        else
            return false;
    }

    friend void IspisAuta(const Auto&);
};


#endif // AUTO_HPP_INCLUDED
