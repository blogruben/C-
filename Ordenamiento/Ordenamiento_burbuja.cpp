// Es un algoritmo de ordenamiento. 
// Funciona revisando cada elemento de la lista
//  que va a ser ordenada con el siguiente,
// intercambiandolos de posicion si estan en el orden equivocado. Es
// necesario revisar varias veces toda la lista hasta que no se
// necesiten mas intercambios, lo cual significa que la lista esta
// ordenada.

#include<iostream>
#include<conio.h>
using namespace std;
 
int main(){

   int numeros[] = {3,1,5,4,2};
   int i,j,aux;

   for(i=0;i<5;i++){
      for (j=0;j<5;j++){
         if(numeros[j] > numeros[j+1]){
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
         }
      }
   }

   cout<<"Ordenamiento Ascendente: ";
   for (i=0;i<5;i++){
      cout<<numeros[i]<<" ";
   }
   
   cout<<"\nOrdenamiento Descendente: ";
   for(i=4;i>=0;i--){
      cout<<numeros[i]<<" ";
   }

   getch();
   return 0;
}