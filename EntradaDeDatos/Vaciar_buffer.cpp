#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;


 int main(){
	int a;
	string s;

   //por ejemplo "5\n" guarda el 5 en int a y el resto "\n" se queda en buffer
	cout << "Numero1: "; cin >> a;  
   cout << "String: ";    
   //fflush(stdin);            // Discards the input buffer
   //cin >> ws;	             // Discards the input buffer and initial white spaces of string
   //cin.sync();               // Discards the input buffer 
   //cin.ignore(256, '\n');    // discards the input buffer
   getline(cin, s);

   cout << "int: " << a << endl;
	cout << "String: " << s << endl;
   getch();
   return 0;
 }