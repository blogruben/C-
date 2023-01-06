/*
Hacemos un if 
*/
#include<iostream>
using namespace std;

int main (){

    int numeroDia;

    const int LUNES = 1;
    const int VIERNES = 5;
    const int DOMINGO = 7;

    cout<<"Escriba un numero de dia: "; cin>>numeroDia;

    //CONDICIONALELS
    if(numeroDia < LUNES || numeroDia > DOMINGO){
        cout<<"El dia de la semana "<<numeroDia<<" no existe. Prueba entre uno y siete."<<endl;
    }
    else if(numeroDia <= VIERNES ){
        cout<<"Es un dia de diario."<<endl;
    }    
    else{
        cout<<"Es fin de semana"<<endl;
    } 

    return 0;
}
