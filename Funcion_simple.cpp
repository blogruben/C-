#include<iostream>
#include<conio.h>
using namespace std;


//Prototipo de Funcion
int encontrarNumeroMayor(int x, int y);
void mostrarMultiplicacion(int x,int y);

int numero1,numero2; 

int main(){
    int mayor;
    pedirDatos();
    mayor = encontrarNumeroMayor(numero1,numero2);
    cout<<"El mayor es el numero: "<<mayor<<endl;
    mostrarMultiplicacion(numero1,numero2);
    getch();
    return 0;
 }

//Definicion de Funciones
void pedirDatos(){
    cout<<"Escriba el primer numero: ";cin>>numero1;
    cout<<"Escriba el segundo numero: ";cin>>numero2;
}

int encontrarNumeroMayor(int x, int y){
    int numMax;
        if(x>y){
            numMax  = x;
        }
        else{
            numMax = y;
        }
    return numMax;
}

void mostrarMultiplicacion(int x,int y){
    float mult = x * y;
    cout<<"La multiplicacion es: "<<mult<<endl;
}

