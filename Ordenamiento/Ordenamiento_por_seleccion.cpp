//Algoritmo del Ordenamiento por Seleccion
// Es un algoritmo de ordenamiento que requiere O(n^2)
// Operaciones para ordenar una lista de n numeros. Su
// funcionamiento es el siguiente:
// Buscar el minimo elemento de la lista.
// Intercambiar con el primer elemento.
// Buscar el minimo del resto de la lista.
// Intercambiar con el segundo.
// Y asi sucesivamente.

#include<iostream>
#include<conio.h>
using namespace std;
 
int main(){
   int numeros[ ] = {3,2,1,5,4};
   int i,j,aux,min;


   for (i=0;i<5;i++){
      min = i;
      for (j=i+1; j<5; j++) {
         if(numeros[j] < numeros[min]){
            min = j;
         }
      }
      aux = numeros[i];
      numeros[i] = numeros[min];
      numeros[min] = aux;
   }

   cout<<"Ordenamiento Ascendente: ";
   for(i=0; i<5; i++){
      cout<<numeros[i]<<" ";
   }

   cout<<"\nOrdenamiento Descendente: ";
   for(i=4;i>=0;i--){
      cout<<numeros[i]<<" ";
   }

   getch();
    return 0;
}