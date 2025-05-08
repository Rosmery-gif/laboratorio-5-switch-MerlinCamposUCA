#include <iostream>
using namespace std;

int main(){

int dia=0;

cout<<"Ingrese un numero entre 1 y 7: ";
cin>>dia;

switch(dia)
{
    case 1: 
        cout<<"El numero 1 es respectivo al dia lunes";
        break;
    case 2: 
        cout<<"El numero 2 es respectivo al dia martes";
        break;
    case 3: 
        cout<<"El numero 3 es respectivo al dia mieroles";
        break;
    case 4: 
        cout<<"El numero 4 es respectivo al dia jueves";
        break;
    case 5: 
        cout<<"El numero 5 es respectivo al dia viernes";
        break;
    case 6: 
        cout<<"El numero 6 es respectivo al dia sabado";
        break;
    case 7: 
        cout<<"El numero 7 es respectivo al dia domingo";
        break;
    default:
        cout<<"Ingrese un numero valido";
        break;
}

    return 0;

}