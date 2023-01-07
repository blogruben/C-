#include<iostream>
#include<conio.h>
using namespace std;
 
// una estructura es una coleccion de varios elementos, llamados campos,
// que pueden ser de diferente tipos. 

//Declarando variables Structs

struct Coche {
    char marca[25];
    int caballos_potencia;
    float precio;
    char fecha_matriculacion[20];
};
struct Coche coche1,coche2,coche3;

struct coleccion_DVD {
    char titulo[ 30];
    char artista[25];
}DVD1,DVD2,DVD3;

struct Persona{
char nombre[ 20];
int edad;
}
personal = {"Raul", 49},
persona2 = {"Cristina",35};

struct Persona nueva_persona;

 int main(){

    cout<<"Persona 1 "<<endl;
    cout<<"Nombre: "<<personal.nombre<<endl;
    cout<<"Edad: "<<personal.edad<<endl;

    cout<<"\nPersona 2 "<<endl;
    cout<<"Nombre: "<<persona2.nombre<<endl;
    cout<<"Edad: "<<persona2.edad<<endl;

    cout<<"\nCrear persona"<<endl;
    cout<<"Nombre: ";
    cin. getline(nueva_persona.nombre, 20, '\n');
    cout<<"Edad: ";
    cin>>nueva_persona.edad;

    cout<<"\nImprimiendo datos de la nueva persona\n";
    cout<<"Nombre: "<<nueva_persona.nombre<<endl;
    cout<<"Edad: "<<nueva_persona.edad<<endl;

    getch();
    return 0;
 }