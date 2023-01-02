#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
 
int main(){
    char nombre0[15];
    char nombre1[15];
    char nombre2[15];

    //No se deve usar cin para pedir datos
    //cin solo coge la primera palabra (hasta el espacio)
    cout<<"Como te llamas? (cin) ";//nombre apellido1 apellido2
    cin>>nombre0;//muestra nombre
    cout<<nombre0<<endl;

    //El problemas de get() es que si el introduces mas de 15 posiciones 
    //los guarda todos, por lo que el array nombre1[15] usa posiciones que 
    //no le pertenece
    cout<<"Como te llamas? (gets) ";//nombre apellido1 apellido2
    gets(nombre1);
    cout<<nombre1<<endl;

    //la mejor forma de guaradar string
    //guarda en la variable nombre2, 15 posiciones o hasta que encuentre un salto de line \n
    cout<<"Como te llamas? (cin.getline) ";
    cin.getline(nombre2,15,'\n');
    cout<<nombre2<<endl;

    return 0;
}