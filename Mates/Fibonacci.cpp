 #include<iostream>
using namespace std;
 
int main(){

    //Ver serie de Fibonacci de un numero
    int numeros,n1=0,n2=1,suma=1;
    cout<<"Numeros de fibonacci: "; cin>>numeros;
    cout<<0<<" ";
    for(int i=1;i<=numeros;i++){
        int suma= n1 + n2;
        cout<<suma<<" ";
        n1 = n2;
        n2 = suma;
    }
    return 0;
}