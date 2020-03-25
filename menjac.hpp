#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum TipMenjaca {automatik,manuelni};

class Menjac{

private:
    TipMenjaca tip;
    int brojbrzina;

public:
    Menjac(){tip=manuelni; brojbrzina=3;}
    Menjac(TipMenjaca t,int b){tip=t; brojbrzina=b; }
    Menjac(const Menjac &c){tip=c.tip; brojbrzina=c.brojbrzina; }

    TipMenjaca getTip(){return tip;}
    int getBrojBrzina(){return brojbrzina;}

    void setTip(TipMenjaca t) {tip=t;}
    void setBrojBrzina(int b) {brojbrzina=b;}

    friend void IspisMenjaca(const Menjac&);


};


#endif // MENJAC_HPP_INCLUDED
