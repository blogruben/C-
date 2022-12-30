/*
Lectura O entrada de datos
*/

#include<iostream>
#include<stdlib.h>//preguntar para salir system(pause)
 
 using namespace std;

 int main (){
    int edad;
    char sexo[10];
    float alturaPersona;
    char nombre[10];
    char primerApellidos[10];
    char segundoApellidos[10];


    cout<<"Nombres y apellidos: "; cin>>nombre>>primerApellidos>>segundoApellidos;
    cout<<"Edad: "; cin>>edad;
    cout<<"Sexo: "; cin>>sexo;
    cout<<"Altura en metros: "; cin>>alturaPersona;

    cout<<"\n\t---Persona---"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Primer Apellidos: "<<primerApellidos<<endl;
    cout<<"Segundo Apellidos: "<<segundoApellidos<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<alturaPersona<<endl;

    system("pause");
    return 0;
}


