/*
Hacer un programa  que solicite el ingreso de un número y que luego emita un cartel por pantalla aclarando si el mismno es múltipli de 5.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  int const multiplo = 5;
  cout << "\t ingrese numero entero \n";
  cout << "Ingrese el numero: ";
  cin >> numero;
  if (numero % multiplo == 0)
  {
    cout << "El numero es multipli de " << multiplo << endl;
  }else{
    cout << "El numero no es multipli de " << multiplo << endl;
  }
  

  return 0;
}