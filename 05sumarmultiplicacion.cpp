/*
Leemos de la entrada dos numeros y muestre
en la salida su suma, resta, multiplicacién y division. 
*/

#include<iostream>
using namespace std;

int main(){
    int numero1,numero2;
    int suma = 0, resta = 0; 
    int multiplicacion = 0,division = 0;

    cout<<"Programa de suma y multiplicacion"<<endl;
    cout<<"Primer numero: "; cin>>numero1;
    cout<<"Segundo numero: "; cin>>numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}
 
