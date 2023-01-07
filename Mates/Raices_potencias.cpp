#include<iostream>
#include<math.h>//para sqrt() pow()
using namespace std;
 
int main(){

    int numero = 0;
    cout<<"Numero: "; cin>>numero;
    int cuadrado = pow(numero,2);
    int raiz=sqrt(numero);
    cout<<"El cuadrado de "<<numero<<" es: "<<cuadrado<<endl;
    cout<<"La raiz cuadrada de "<<numero<<" es: "<<raiz<<endl;

    return 0;
}