/*
Lectura O entrada de datos
*/

 #include<iostream>
 #include<conio.h>//mantener la consola abierta getch
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


    //MENU
    int opc;
    cout<<"\tQue prefieres?"<<endl;
    cout<<"1. Chocolate"<<endl;
    cout<<"2. Vainilla"<<endl;
    cout<<"3. Fresa"<<endl;
    cout<<"Opcion: "; cin>>opc;
    switch(opc){
    case 1:
        cout<<"Te gusta el chocolate ";
    case 2:
    case 3:
        cout<<"No te gusta el chocolate ";
    }
    
    getch();//esperar para salir del programa

    system("pause");
    return 0;
}


