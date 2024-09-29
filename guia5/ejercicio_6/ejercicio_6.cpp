/*
Hacer un programa que solicite UN número y luefo calcule y emita un cartel aclaratorio si 
el mismo es primo o no es primo.
nota: usando while
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  int contador=0;
  int i=2;
  cout<<"ingrse el numero entero: ";
  cin>>numero;

  if(numero != 1){

    while(i<numero){
      if(numero % i == 0){
        contador++;
        break;
      }
      i++;
    }
  }else{
    cout<<"el numero 1 no es primo";
    return 0;
  }
  if(contador > 0){
    cout<<"el numero "<<numero<<" NO es primo"<<endl;
  }else{
    cout<<"el numero "<<numero<<" SI es primo"<<endl;
  }

  return 0;
}