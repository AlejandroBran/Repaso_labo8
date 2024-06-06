#include <iostream>
#include <cmath>
using namespace std;

//Haga un programa para calcular la pensión mensual, debe mostrar el menú siguiente:;

int main(){

    //Variable tipo char;
    
    


    int opcion;


    
    do{
        cout << "\nPension mensual. "<<"\n";
        cout << "\n1. Pension para los optados."<<"\n";
        cout << "\n2. Pension para los afiliados del Sistema Publico de Pensiones."<<"\n";
        cout << "\n3. Pension de los afiliados al Sistema privado (AFP)."<<"\n";
        cout << "\n4. Salir."<< "\n";
        cout << "\nSeleccione una opcion---> |1| |2| |3| |4|  "<<"\n";        
        cin >> opcion;
       

       
          
          switch (opcion)
            {
             case 1 :
             
             cout << "\n1. Pension para los optados. "<<"\n";

             break;

             case 2:

             cout << "\n2. Pension para los afiliados del Sistema Publico de Pensiones."<<"\n";

             break;

             case 3: 
             cout << "\n3. Pension de los afiliados al Sistema privado (AFP)."<<"\n";

             break;
             case 4:
             cout << "\n4. Salir. "<< "\n";
     
             break;
             default: 
              cout << "\nOpcion invalidad.  \n";
            }
       
        
    }while (opcion !=4);
    
    
        



    


    return 0;
}