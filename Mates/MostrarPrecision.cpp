#include<iostream>
#include <iomanip>//para setprecion
using namespace std;
 
int main(){
    float flotante = 8.92;//presicion 7 decimales
    double masDecimales = 15.64376;//precion 15 decimales
    //MOSTRAR DIFERENTE PRECISION
    //precision lo usamos para mostrar mas o menos decimal 
    //pero el valor del float o double no se modifica.
    streamsize preIni = std::cout.precision();//precision incial, para poderla recuperar
    cout<<"\nDecimales con presicion"<<endl;
    cout<<"Por defecto mostramos "<<preIni<<" numeros."<<endl;
    cout << "double con precision de 5:  " << setprecision(5) << masDecimales << " original: " << setprecision(preIni) << masDecimales << '\n';
    cout << "flotante con precision de 2: " << setprecision(2) << flotante <<endl;
    cout.precision(preIni);
    return 0;
}