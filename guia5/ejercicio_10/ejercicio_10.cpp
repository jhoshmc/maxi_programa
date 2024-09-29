/*
Hacer un programa que solicite una lista de números que corta cuando se ingresa un cero y luego emitir por pantalla el maximo de los numeros negativos y el mininmo de los número positivos.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  int minPositivo=0;
  int maxNegativo=0;
  bool bandera= false;
  bool bandera2=false;

  cout<<"ingrese el numero: ";
  cin>>numero;

  while(numero !=0){
    if(numero >0){
      if(!bandera){
        minPositivo=numero;
        bandera=true;
      }else if(numero < minPositivo){
        minPositivo=numero;
      }
    } else if(!bandera2){
      maxNegativo=numero;
      bandera2=true;
    }else if(numero > maxNegativo){
      maxNegativo= numero;
    }
  cout<<"ingrese el numero: ";
  cin>>numero;
  }

  cout<<"el minimo de los positivos es: "<<minPositivo<<endl;
  cout<<"el maximo de los negativos es: "<<maxNegativo<<endl;

  return 0;
}