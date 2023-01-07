#include<iostream>
#include<conio.h>
using namespace std;


//Prototipo de Funcion
//Defino el generico T que puede ser un int float o double
template <class T>
void mostrarValorAbsoluto(T numero);

int main(){
   int numero1 = 12;
   int numero2 = -12;
   float decimal1 = 53.75;
   float decimal2 = -53.75;
   double decimalLargo1 = 56.34652;
   double decimalLargo2 = -56.34652;

   mostrarValorAbsoluto(numero1);
   mostrarValorAbsoluto(numero2);
   mostrarValorAbsoluto(decimal1);
   mostrarValorAbsoluto(decimal2);
   mostrarValorAbsoluto(decimalLargo1);
   mostrarValorAbsoluto(decimalLargo2);

    getch();
    return 0;
 }

template <class T>
void mostrarValorAbsoluto(T numero) {
   if (numero<0) {
      numero = numero * -1;
   }
      cout <<"El numero absoluto es: "<<numero<<endl;
}
