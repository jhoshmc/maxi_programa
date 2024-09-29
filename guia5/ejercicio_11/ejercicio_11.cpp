/*
Hacer un programa para ingresar una lista de números que corta cuando se ingresa un cero y luego mostrar la cantidad de numeros primos, la cantidad de números pares, la cantidad de positivos y la cantidad de negativos.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int primos=0, pares=0, positivos=0, negativos=0;
  int numero;
  int c;
  int i;

  cout<<"ingrese el numero: ";
  cin>>numero;
  while(numero !=0){
    c=0;
    i=2;
    if(numero>0){
      positivos++;
    }else{
      negativos++;
    }
    if(numero % 2 == 0){
      pares++;
    }
    if(numero != 1){

     while(i<numero){
       if(numero % i == 0){
          c++;
          break;
       }
       i++;
      }
      if(c== 0){
       primos++;
      }
    }
  
    cout<<"ingrese el numero: ";
    cin>>numero;
  }

  cout<<"la cantidad de numeros primos es: "<<primos<<endl;
  cout<<"la cantidad de numeros pares es: "<<pares<<endl;
  cout<<"la cantidad de numeros positivos es: "<<positivos<<endl;
  cout<<"la cantidad de numeros negativos es: "<<negativos<<endl;

  return 0;
}