#include <iostream>
using namespace std;

int main(){

    //Defino mis variables 
int numero1=0, numero2=0, opcion=0, suma=0, resta=0, mult=0, div=0;

//Pido datos al usuario
cout<<"Ingrese su primer numero ";
cin>>numero1;

cout<<"Ingrese su segundo numero ";
cin>>numero2;

cout<<"Que operacion desea realizar: Suma=1, Resta=2, Multuiplicacion=3, divison=4 ";
cin>>opcion;


switch(opcion)
{
    //Caso 1 para la suma de los numeros
    case 1: 
    suma= numero1 + numero2;
        cout<<"La suma de los numeros es "<< suma;
        break;
    case 2: 
    //caso 2 para la resta de los numeros
    resta= numero1-numero2;
        cout<<"La resta de los numeros es "<<resta;
        break;
    case 3: 
    //caso 3 para la multiplicacion de los numeros
    mult=numero1*numero2;
        cout<<"La multiplicacion de los numeros es "<<mult;
        break;
    case 4: 
    //caso 4 para la division si numero2 diferente a cero
    if(numero2!=0){
    div=numero1/numero2;
        cout<<"La division de los numeros es "<<div;
    }
    //caso 4 para la division si numero2 igual a 0
    else{
    cout<<"No se puede dividir entre 0";
        
    }
        break;

//Valor default 
default: 
cout<<"Ingrese valores valios";
break;

}
return 0;
}