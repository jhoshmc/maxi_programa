/*
Hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y que luego determine e informe con un cartel alacaratorio que tipo de triángulo corresponde:
  a. Equilátero: cuando los tres lados sean iguales.
  b. Isósceles: cuando dos de los tres lados sean iguales.
  c. Escaleno: cuando todos los lados sean distintos.
*/

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]){
  float longitud_1, longitud_2, longitud_3;
  string const equilatero = "Equilatero";
  string const isosceles = "Isosceles";
  string const escaleno = "Escaleno";
  string rpta="";

  cout << "ingrese la primera longitud: ";
  cin >> longitud_1;
  cout << "Ingrese la segunda longitud: ";
  cin >> longitud_2;
  cout << "Ingrese la tecera longitud: ";
  cin >> longitud_3;

  if (longitud_1 == longitud_2 && longitud_2 == longitud_3)
  {
    rpta = equilatero;
  }else if (longitud_1 != longitud_2 && longitud_2 != longitud_3 && longitud_1 != longitud_3)
  {
    rpta = escaleno;
  }else{
    rpta = isosceles;
  }

  cout << "Segun las longitudes, el tipo de triangulo es: " << rpta << endl;

  return 0;
} 