#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
char palabra[] = "hola";
int longitud=0;
longitud = strlen(palabra);

//Medir longitud de una cadena
cout<<"Longitud de la palabra es: "<<longitud<<endl;

//Copiar la cadena
char palabra2[] = "hola";
strcpy(palabra2, palabra) ;
cout<<palabra2<<endl;

//No se puede asignar una valor
// a la variable categoria asi:
char categoria[4];
//categoria = "hola";   
// da error expression must be a modifiable lvalue
//los espacios del array son fijos y no se asignar asi
strcpy(palabra2, "hola") ;//hay que copiarlos

//Comparar cadenas
if(strcmp(palabra,palabra2) == 0){
cout<<"Ambas cadenas son iguales"<<endl;
}
if(strcmp(palabra,palabra2) != 0){
cout<<"Ambas cadenas son diferentes"<<endl;
}

//Concatenar cadenas de texto
char frase1[] = "Haciendo una ";
char frase2[] = "prueba de texto";
char frase3[30];
strcpy(frase3,frase1);
strcat(frase3,frase2); 
cout<<frase3<<endl;

//Invertir cadena
strrev(frase3);
cout<<frase3<<endl;

//Poner en mayuscula
strupr(palabra);
cout<<palabra<<endl;

//Poner en minusculas
strlwr(palabra);
cout<<palabra<<endl;

getch();

}