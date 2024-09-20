/*
Hacer un programa para ingresar dos numeros distintos y luego se muestre por pantalla el menor de ellos
NOTA: no te olvides del ambiente ideal
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero_1;
  int numero_2;
  cout << "\t Ingrese numero enteros " << endl;
  cout << "Ingrese el primer numero: ";
  cin >> numero_1;
  cout << "Ingrese el segundo numero: ";
  cin >> numero_2;
  if (numero_1 > numero_2)
  {
    cout << "el primer numero es mayor";
  }else{
    cout << "el segundo numero es mayor";
  }

  return 0;
}