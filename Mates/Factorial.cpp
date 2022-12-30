//Programa 
#include<iostream>
using namespace std;
 
int main(){

    //FACTORIAL
    int numero, factorial = 1;
    cout<<"Factorial de un numero: "; cin>>numero;
    for(int i=1;i<=numero;i++){
    factorial *= i;
    }
    cout<<"El factorial del numero "<<numero<<" es: "<<factorial<<endl;
    
    return 0;
}