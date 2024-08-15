//*3  Hacer un programa que permita ingresar el año actual y el año de la fecha de
//* nacimiento de una persona y luego calcule y emita por pantalla su edad.
//* Nota: no hay que tener en cuenta si la persona cumplió años o no,
//* simplemente calcular.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int edad, año_actual,año_nacimiento;
  cout << "ingrese el año actual: ";
  cin >> año_actual;
  cout << "ingrese el año de nacimeinto: ";
  cin >> año_nacimiento;
  edad = año_actual - año_nacimiento;
  cout << "su edad es de: " << edad;
  return 0;
}
