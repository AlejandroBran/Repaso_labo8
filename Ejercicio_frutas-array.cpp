#include <iostream>

using namespace	 std;

int main(){
    

   string frutas[5] = {"manazanas", "pera", "piña", "mango","fresa" };
   
   string frase = frutas[0] + " " + frutas[3];

   cout << frase << "\n";

   cout << "\nMi fruta favorita es: \n"<<frutas[3];



    return 0;
}