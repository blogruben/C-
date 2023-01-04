#include<iostream>
 
 using namespace std;
 
 int main(){

    int numeroDia;

    cout<<"Escriba un numero de dia: "; cin>>numeroDia;

    //SWITCH MULTIPLE
    switch (numeroDia) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Es un dia laboral."<<endl; break;
    case 6:
    case 7:
        cout << "Es fin de semana."<<endl; break;
    } 

    return 0;
 }