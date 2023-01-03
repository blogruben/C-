//Tipos de datos básicos de C++

#include<iostream>//para cout

 using namespace std;

 int main (){
    int entero1 = 10;//entero
    int entero2 = 3; 
    float flotante = 8.92;//presicion 7 decimales
    double masDecimales = 15.64376;//precion 15 decimales
    char letra = 'a';//caracter
    char nombre[] = "Raul";
    char nombre2[]={'R', 'u', 'b', 'e', 'n', '\0'};
    int numerosVector[] = {1,4,6,7,3};//vector o arreglo
    int numerosVector2[10];
    numerosVector2[0] = 1;
    numerosVector2[9] = 10;

    //MOSTRAR DIFERENTES DATOS
    cout<<endl<<"Tipos de datos"<<endl;
    cout<<"entero   "<<entero1<<endl;
    cout<<"flotante "<<flotante<<endl;
    cout<<"double   "<<masDecimales<<endl;
    cout<<letra<<endl;
    cout<<nombre<<endl;
    cout<<nombre2<<endl;
    nombre2[2] = 'B';nombre2[4] = 'N';
    cout<<nombre2<<endl;


 }
