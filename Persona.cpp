#include "Persona.h"
string Persona::toString(){
    return "-1";
}
Persona::Persona(string nac,string nom,int ed,bool se,Elemento ele,Poder pod){
    nacion=nac;
    nombre=nom;
    edad=ed;
    sexo=se;
    elemento=ele;
    poder=pod;
}