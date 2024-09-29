/*
Hacer un programa que solicite una lista de numeros que corta cuando se ingresa un cero y luego mostrar por pantalla el maximo de ellos y la pasición en donde fue ingresado.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero, maximo=0, posicion=0;
  int i=0;

  cout<<"ingrese un numero: ";
  cin>>numero;

  while(numero!=0){
    if(numero > maximo){

      maximo = numero;
      posicion = i+1;
    }

    i++;
    cout<<"ingrese un numero: ";
    cin>>numero;

  }

  cout<<"el numero mayor ingresado es: "<<maximo<<" y su posicion es: "<<posicion<<endl;

  return 0;
}