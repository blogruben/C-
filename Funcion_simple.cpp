#include<iostream>
#include<conio.h>
using namespace std;


//Prototipo de Funcion
int encontrarMax(int x, int y);


int main(){
    //Buscar el numero mayor
    int n1,n2;
    int mayor;
    cout<<"Escriba el primer numero: ";cin>>n1;
    cout<<"Escriba el segundo numero: ";cin>>n2;
    mayor = encontrarMax(n1,n2);
    cout<<"El mayor es el numero: "<<mayor<<endl;

    getch();
    return 0;
 }

//Definicion de Funcion

int encontrarMax(int x, int y){
    int numMax;
        if(x>y){
            numMax  = x;
        }
        else{
            numMax = y;
        }
    return numMax;
}