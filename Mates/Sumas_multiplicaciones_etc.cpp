
#include<iostream>
using namespace std;
 
int main(){
    int entero1 = 10;
    int entero2 = 3; 

    //SUMAS Y MULTIPLICAR
    int suma = 0, resta = 0; 
    int multiplicacion = 0,division = 0;
    
    suma = entero1 + entero2;
    resta = entero1 - entero2;
    multiplicacion = entero1 * entero2;
    division = entero1 / entero2;

    cout<<"\nPrograma de operaciones matematicas"<<endl;
    printf ("%d + %d = %d\n", entero1, entero2, suma);

    string numeros = to_string(entero1)+" - "+to_string(entero2);
    cout<<numeros<<" = "<<resta<<endl;

    cout<<entero1<<" * "<<entero2<<" = "<<multiplicacion<<endl;
    cout<<entero1<<" / "<<entero2<<" = "<<division<<endl;
    if (entero1%2==0) cout<<"El numero "<<entero1<<" es par"<<endl;
    return 0;
}