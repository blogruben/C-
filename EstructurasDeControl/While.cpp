#include<iostream>
 
 using namespace std;
 
 int main(){

    //WHILE
    int i = 1;
    while(i<=10){
    cout<<i<<endl;
    i++;
    }

    char salir;
    do{
    cout<<"Pulsar s para salir: "; cin>>salir;
    }while((salir!='s'));
    
    return 0;
 }