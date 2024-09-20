/*
Hacer un programa para ingresar dos números. Si el segundo es distinto de cero, calcular
la división del primero por el segundo y mostrar el resultado por pantalla; caso contrario,
emitir un cartel aclarando que no se puede dividir por cero.
*/

#include <iostream>
using namespace std;
int main(int argc, char const * argv[]){
  int n1, n2;
  float resultado;
  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;

  if (n2 != 0)
  {
    resultado = n1 / n2;
    cout << "El resltado es: " << resultado << endl;
  }else{
    cout << "No se puede dividir un numero por cero";
  }
  

  return 0;
}