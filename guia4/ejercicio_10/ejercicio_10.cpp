/*
hacer un programa que solicite 20 numeros y luego emitir por pantalla el máximo de los números pares y el minimo de los números impares
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int maxPar = 0;
  int minImpar = 0;
  bool bandera = false;
  int numero;

  for (int i = 0; i < 20; i++)
  {
    cout << i + 1 << " ingrese el numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
      if (numero > maxPar)
      {
        maxPar = numero;
      }
      
    }else{
      if (bandera == false)
      {
        minImpar = numero;
        bandera = true;
      }else if(numero < minImpar){
        minImpar = numero;
      }
      
    }
    
  }
  cout << "El maximo numero par es: " << maxPar << " y el minimo numero impar es: " << minImpar << endl;

  return 0;
}