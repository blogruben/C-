//Tipos de datos básicos de C++

#include<iostream>//para cout
#include <iomanip>//para setprecion
#include<math.h>//para sqrt() pow()

 using namespace std;

 int main (){
    int entero1 = 10;//entero
    int entero2 = 3; 
    float flotante = 8.92;//presicion 7 decimales
    double masDecimales = 15.64376;//precion 15 decimales
    char letra = 'a';//caracter
    char nombre[] = "Ruben";
    int numerosVector[] = {1,4,6,7,3};//vector o arreglo
    int numerosVector[10];
    numerosVector[0] = 1;
    numerosVector[9] = 10;

    //MOSTRAR DIFERENTES DATOS
    cout<<endl<<"Tipos de datos"<<endl;
    cout<<"entero   "<<entero1<<endl;
    cout<<"flotante "<<flotante<<endl;
    cout<<"double   "<<masDecimales<<endl;
    cout<<"letra    "<<letra<<endl;
    cout<<"Me llamo "<<nombre<<endl;

    //MOSTRAR DIFERENTE PRECISION
    //precision lo usamos para mostrar mas o menos decimal 
    //pero el valor del float o double no se modifica.
    streamsize preIni = std::cout.precision();//precision incial, para poderla recuperar
    cout<<"\nDecimales con presicion"<<endl;
    cout<<"Por defecto mostramos "<<preIni<<" numeros."<<endl;
    cout << "double con precision de 5:  " << setprecision(5) << masDecimales << " original: " << setprecision(preIni) << masDecimales << '\n';
    cout << "flotante con precision de 2: " << setprecision(2) << flotante <<endl;
    cout.precision(preIni);
    

    //SUMAS Y MULTIPLICAR
    int suma = 0, resta = 0; 
    int multiplicacion = 0,division = 0;
    string numeros = to_string(entero1)+" y "+to_string(entero2);
    suma = entero1 + entero2;
    resta = entero1 - entero2;
    multiplicacion = entero1 * entero2;
    division = entero1 / entero2;

    cout<<"\nPrograma de operaciones matematicas"<<endl;
    cout<<"La suma de "<<numeros<<" es: "<<suma<<endl;
    printf ("La suma de %d y %d es: %d\n", entero1, entero2, suma);
    cout<<"La resta de "<<numeros<<" es: "<<resta<<endl;
    cout<<"La multiplicacion de "<<numeros<<" es: "<<multiplicacion<<endl;
    cout<<"La division de "<<numeros<<" es: "<<division<<endl;
    if (entero1%2==0) cout<<"El numero "<<entero1<<" es par"<<endl;


    //FACTORIAL
    int numero, factorial = 1;
    cout<<"Factorial de un numero: "; cin>>numero;
    for(int i=1;i<=numero;i++){
    factorial *= i;
    }
    cout<<"\nEl factorial del numero es: "<<factorial<<endl;


    //FIBONACCI
    int n,x=0,y=1,z=1;
    cout<<"Numeros de fibonacci: "; cin>>n;
    for(int i=1;i<=n;i++){
        int z= x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }


    //GENERAR NUMERO ALEATORIO
    #include<time.h>
    srand(time(NULL)); //generar un numero aleatorio;
    //numero_aleatorio = Limite_inferior + rand() % (Limite_superior +1 - Limite_inferior);
    int aleatorio = 1 + rand()%(100);//
    cout<<aleatorio;


    //LIBRERIA MATEMATICAS
    cout<<"El numero "<<entero1<<" por dos es: ";
    entero1 *= 2; //entero = entero *2
    cout<<entero1<<endl;
    int cuadrado = pow(entero1,2);
    int raiz=sqrt(entero1);
    cout<<"El cuadrado de "<<entero1<<" es: "<<cuadrado<<endl;
    cout<<"La raiz cuadrada de "<<cuadrado<<" es: "<<raiz<<endl;
 }
