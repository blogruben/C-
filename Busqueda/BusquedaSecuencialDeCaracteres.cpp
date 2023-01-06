//Programa HolaMundo salto de lineas en C++
 
 #include<iostream>
 
 using namespace std;//para no usar std::cout
 
 int main(){


char a[] = {'e','i','o','a','u' },dato;
int i;
char band = 'F';

dato = 'o';

//Busqueda Secuencial
i=0;
while((band == 'F') && (i<5)){
  if(a[i] == dato){
    band = 'V';
  }
  i++;
}

if(band == 'F'){
cout<<"El caracter no existe en el arreglo"<<endl;
}
else if(band == 'V'){
cout<<"El caracter esta en la posicion: "<<i-1<<endl;
}





    return 0;//obligatorio devolver un entero
 }