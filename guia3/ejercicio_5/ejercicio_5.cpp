/*
Hacer un programa que solicite el ingreso de las notas del primer parcial y del segundo parcial de una alumna de porgramación.
El programa deberá analizar las notas y emitir las situación de la alumna según la siguiente escala:
  a. Si tiene 8 o más en ambos parciales, emitir, "aprobación direcra".
  b. Si no tiene 8 o más en ambos pero tiene aprobados ambos parciales(se aprueba con 6 más), emitir "rinde examen final".
  c. Si tiene menos de 6 en alguno de los dos parciales, emitir "debe recuperar".
El programa debe emitir solo un cartel, el ue corresponda.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int parcial1, parcial2;

  cout << "Ingrese el primer parcial: ";
  cin >> parcial1;
  cout << "Ingrese el segundo parcial: ";
  cin >> parcial2;

  if (parcial1 >= 8 && parcial2 >= 8 )
  {
    cout << " Aprobacion directa";
  }
  else if (parcial1>= 6 && parcial2 >= 6 )
  {
    cout << "Rinde examen final";
  }else{
    cout << "Debe recupera ";
  }
  
  

  return 0;
}