#include <iostream>
#include "auto.hpp"

using namespace std;

void IspisMenjaca(const Menjac &c){
    cout<< "MENJAC"<<endl;
    cout<<"Tip: ";
    if(c.tip ==manuelni)
        cout<<"Manuelni"<<endl;
    else
        cout<<"Automatik"<<endl;
    cout<<"Brzine: "<<c.brojbrzina<<endl;

}

void IspisSkoljke(const Skoljka &a){
    cout<< "SKOLJKA"<<endl;
    cout<<"Boja: ";
    switch(a.boja){
    case crvena:
        cout<<"Crvena"<<endl;
        break;
    case zelena:
        cout<<"Zelena"<<endl;
        break;
    case plava:
        cout<<"Plava"<<endl;
        break;
    }
}

void IspisAuta (const Auto &o){
    cout<<"AUTOMOBIL"<<endl<<"---------"<<endl;

    IspisMenjaca(o.m);
    IspisSkoljke(o.s);

    cout<<"Stanje: ";
    switch(o.stanje){
    case ugasen:
        cout<<"Ugasen";
        break;
    case u_voznji:
        cout<<"U voznji";
        break;
    case pokvaren:
        cout<<"Pokvaren";
        break;
    }
    cout<<endl;


}
void Meni(){
    cout<<"Testiranje auta 2:"<<endl;
    cout<<"1. Upali"<<endl;
    cout<<"2. Ugasi"<<endl;
    cout<<"3. Pokvari"<<endl;
    cout<<"4. Popravi"<<endl;
    cout<<"5. Povecaj brzinu"<<endl;
    cout<<"6. Smanji brzinu"<<endl;
    cout<<"7. Izadji iz programa"<<endl;

}

int main()

{
    Menjac menjac1,menjac2(automatik,4),menjac3(menjac2);
    Skoljka skoljka1,skoljka2(crvena),skoljka3(skoljka1);
    Auto auto1,auto2(automatik,4,zelena,u_voznji,2),auto3(auto2);

    IspisAuta(auto1);
    IspisAuta(auto2);
    IspisAuta(auto2);

    int n=1;
    while(n>0 && n<7){
        Meni();
        cout<<endl;
        cin>>n;
        switch(n){

        case 1:
                if(auto2.upali())
                    cout<<"Auto upaljen"<<endl;
                else
                    cout<<"Auto ne može da se upali."<<endl;
                break;
        case 2:
                if(auto2.ugasi())
                    cout<<"Auto je ugasen"<<endl;
                else
                    cout<<"Greška"<<endl;
                break;
        case 3:
                if(auto2.pokvari())
                    cout<<"Auto se pokvario"<<endl;
                else
                    cout<<"Greska"<<endl;
                    break;
        case 4:
                if(auto2.popravi())
                    cout<<"Auto je popravljen"<<endl;
                else
                    cout<<"Greska"<<endl;
                break;
        case 5:
                if(auto2.povecajbrzina()){
                    cout<<"Brzina je povecana"<<endl;
                }
                else
                    cout<<"Greska"<<endl;
                break;
        case 6:
                if(auto2.smanjibrzinu()){
                    cout<<"Brzina smanjena"<<endl;
                }
                else
                    cout<<"Greska"<<endl;
        }

    }



    return 0;
}
