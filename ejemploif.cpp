#include <iostream>
using namespace std;

int main()
{
int edad=0;

cout <<"Ingrese su edad ";
cin>>edad;

if(edad<18){
    cout<<"Usted es menor de edad";
}

else if(edad<60){
    cout<<"Usted es un adulto";
}

else{
    cout<<"Usted es un viejito";
}
    return 0;
}