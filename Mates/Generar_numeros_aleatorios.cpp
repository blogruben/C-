#include<iostream>
using namespace std;
 
int main(){

    //generar numero aleatorio entre 1 y 100
    #include<time.h>
    int numero_aleatorio = 0, limite_inferior = 1, limite_superior = 100;
    srand(time(NULL)); //generar un numero aleatorio;
    numero_aleatorio = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
    //int aleatorio = 1 + rand()%(100);//
    cout<<numero_aleatorio;

    return 0;
}