/*
Hacer un progrma que solicite 20 edades y luego calcule el promedio de edad de aquellas poersonas mayores a 18 años
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  float promedio=0;
  int contador = 0;
  int numero;

  for (int i = 0; i < 20; i++){
    cout<<i+1 << " ingrese el numero: ";
    cin >> numero;

    if(numero > 18){
      promedio += numero;
      contador++;
    }
  }

  promedio /= contador;

  cout << " el promedio de edad es: " << promedio << endl;

  return 0;
}