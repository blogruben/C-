#include<iostream>
#include<conio.h>
using namespace std;



int main(){
   int numero;
   numero=10;
editarReferencia(numero);
   cout<<"editarReferencia "<<numero;//salto de linea
editarValor(numero);
   cout<<"editarValor "<<numero;//salto de linea
    getch();
    return 0;
 }



//paso por referencia
void editarReferencia(int& xnum){
xnum = 20;
}

//paso por valor
void editarValor(int xnum){
xnum = 30;
}