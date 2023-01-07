//Busqueda binaria

 #include<iostream>
 


 using namespace std;
 
int main(){
  int numeros[] = {1,2,3,4,5,6};
  int inf,sup,mitad, dato;
  char band = 'F';

  dato = 4;
  inf = 0;
  sup = 5;
  

  while(inf <= sup){
    mitad = (inf+sup)/2;

    if(numeros[mitad] == dato){
      band = 'V';
      break;
    }

    if(numeros[mitad] > dato){
      sup = mitad;
      mitad = (inf+sup)/2;
    }

    if(numeros[mitad] < dato){
      inf = mitad;
    }
  }

  if(band == 'V'){
    cout<<"El numero esta en la posicion: "<<mitad<<endl;
  }
  else{
    cout<<"El numero NO esta en el array.";
  }

  return 0;
 }