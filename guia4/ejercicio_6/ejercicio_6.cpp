/*
Hacer un porgrtama que solicite un número y luego calcule y emita un cartel claratorio si el mismo es primo o no es primo
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;

  cout << "ingrese el numero: ";
  cin >> numero;

  int contador = 0;
  if (numero == 2)
  {
    cout << "El numero es primo";
    return 0;
  }
  
  if (numero != 1)
  {
    
    for (int i = 2; i < numero; i++)
    {
      if (numero % i == 0)
      {
      contador++;
      break;
      
      }
    
    }

    if (contador == 0)
    {
      cout << "El numero es primo" << endl;
    }else{
      cout << "El numero es compuesto" << endl;
    }
  }else{
    cout << "1 no es un numero primo";
  }
  
  

  return 0;
}