//*6 Hacer un programa para ingresar por teclado las tres notas de exámenes de un
//* alumno y luego calcule y emita por pantalla el promedio final.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  float a, b, c, promedio = 0;
  cout << "ingresa 3 notas: ";
  cin >> a >> b >> c;
  promedio = (a + b + c) / 3;
  cout << "El promedio es: " << promedio;
  return 0;
}
