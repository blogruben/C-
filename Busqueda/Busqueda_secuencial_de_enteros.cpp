//Programa HolaMundo salto de lineas en C++
 
 #include<iostream>
 
 using namespace std;//para no usar std::cout
 
 int main(){

int a[] = {3,4,2,1,5};
int i,dato;
char band = 'F';

dato = 4;
//Busqueda Secuencial
i=0;
while((band == 'F') && (i<5)){
  if(a[i] == dato){
    band = 'V';
  }
  i++;
}

if(band == 'F'){
cout<<"El numero no existe en el arreglo"<<endl;
}
else if(band == 'V'){
cout<<"El numero esta en la posicion: "<<i-1<<endl;
}





    return 0;//obligatorio devolver un entero
 }