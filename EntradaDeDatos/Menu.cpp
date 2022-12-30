/*
Lectura O entrada de datos
*/

 #include<iostream>
 #include<conio.h>//mantener la consola abierta getch
 
 using namespace std;

 int main (){

    //MENU
    int opc;
    cout<<"\tQue prefieres?"<<endl;
    cout<<"1. Chocolate"<<endl;
    cout<<"2. Vainilla"<<endl;
    cout<<"3. Fresa"<<endl;
    cout<<"Opcion: "; cin>>opc;
    switch(opc){
    case 1:
        cout<<"Te gusta el chocolate ";
    case 2:
    case 3:
        cout<<"No te gusta el chocolate ";
    }
    
    getch();//esperar 
    return 0;
}


