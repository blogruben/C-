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
        cout<<"El dia de la semana es: ";
    }    
    else{
        cout<<"Es finde semana"<<endl;
        cout<<"El dia de la semana es: ";
    }

    //SWITCH
    switch (numeroDia) {
    case 1:
        cout << "Lunes"<<endl; break;
    case 2:
        cout << "Martes"<<endl; break;
    case 3:
        cout << "Wednesday"<<endl; break;
    case 4:
        cout << "Thursday"<<endl; break;
    case 5:
        cout << "Friday"<<endl; break;
    case 6:
        cout << "Saturday"<<endl; break;
    case 7:
        cout << "Sunday"<<endl; break;
    }   

    //SWITCH MULTIPLE
    switch (numeroDia) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Por lo que tenemos que trabajar."<<endl; break;
    case 6:
    case 7:
        cout << "Por lo que podemos descansar."<<endl; break;
    } 
  
    //WHILE
    int i = 1;
    while(i<=10){
    cout<<i<<endl;
    i++;

    for(int i=10; i>=1; i--){
    cout<<i<<endl;
    }

    char salir;
    do{
    cout<<"Pulsar s para salir: "; cin>>salir;
    }while((salir!='s'));

    return 0;
}











