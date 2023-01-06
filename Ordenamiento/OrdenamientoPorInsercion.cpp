//Algoritmo del Ordenamiento por Insercion
// Es una manera muy natural de ordenar para un ser
// humano, y puede usarse facilmente para ordenar un
// mazo de cartas numeradas en forma arbitraria. Requiere
// O(n?) operaciones para ordenar una lista de n elementos.


#include<iostream>
using namespace std;
 
int main(){

int numeros[] = {4,2,3,1,5};
int i,pos,aux;


for (i=0;i<5;i++){
   pos = i;
   aux = numeros[i];

   while((pos>0) && (numeros[pos-1] > aux)){
   numeros[pos] = numeros[pos-1];
   pos--;
   }
   numeros[pos] = aux;
}

cout<<"Ordenamiento Ascendente: ";
for (i=0;i<5;i++){
   cout<<numeros[i]<<"";
}

   cout<<"\nOrdenamiento Descendente: ";
   for(i=4;i>=0;i--){
      cout<<numeros[i]<<" ";
   }
    return 0;
 }