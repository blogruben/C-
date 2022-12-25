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

    switch (numeroDia) {
    case 1:
        cout << "Lunes"<<endl;
        break;
    case 2:
        cout << "Martes"<<endl;
        break;
    case 3:
        cout << "Wednesday"<<endl;
        break;
    case 4:
        cout << "Thursday"<<endl;
        break;
    case 5:
        cout << "Friday"<<endl;
        break;
    case 6:
        cout << "Saturday"<<endl;
        break;
    case 7:
        cout << "Sunday"<<endl;
        break;
    }   


    return 0;
}











