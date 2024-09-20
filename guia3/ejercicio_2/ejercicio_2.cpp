/*
Hacer un programa que solicite el ingreso de dos números y luego calcular:
  a. La resta si el primero es mayor que el segundo.
  b. La suma si son iguales.
  c. El producto si el primero es menor.
Se deberá emitir un cartel por pantalla con el resultado correspondiente.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2;
  int resultado;

  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;

  if (n1>n2)
  {
    resultado = n1 - n2;
    cout << "El resultado de la resta es: " << resultado << endl;
  }
  if (n1 == n2)
  {
    resultado = n1 + n2;
    cout << "El resultado de la suma es: " << resultado << endl;
  }
  if (n1<n2)
  {
    resultado = n1 * n2;
    cout << "El sultado de la multiplicacion es: " << resultado << endl;
  }
  
  
  

  return 0;
}