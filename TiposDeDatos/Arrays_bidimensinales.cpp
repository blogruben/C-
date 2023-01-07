#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //int ejemplo[2][3] = {{1,2,3} , {4,5,6}};
    int numeros[100][100], filas,columnas;
    
    cout<<"Escriba el numero de filas: "; cin>>filas;
    cout<<"Escriba el numero de columnas: "; cin>>columnas;
    
    //Podir numero para rellenar matriz
    for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
            cout<<"Escriba el numero para la posicion ["<<i<<"]["<<j<<"]";
            cin>>numeros[i][j];
        }
    }
    
    //pintar matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    
    getch();
    return 0;
}