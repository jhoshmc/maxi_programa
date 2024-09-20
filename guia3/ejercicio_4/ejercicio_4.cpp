/*
Un importante negocio de desinfectante liquido realiza descuentos dependiendo de la cantidad de litros vendidos según la siguiente escala:
  a.si vende menos de 100 litros, no hay descuento.
  b.Si vende entre 101 y 300 litros, el descuento es del 10%.
  c.si vende entre 301 y 500 litros, el descuento es del 15%.
  d.Finalmente, si la venta es de más de 500 litros, el descuento es del 25%.
Hacer un programa que solicite el ingreso del importe total de la venta y la cantidad de litros vendidos y calcule y emita el importe con el descuento aplicado.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  float litros, monto;
  const float descuento1 = 0.10;
  const float descuento2 = 0.15;
  const float descuento3 = 0.25;
  float res = 0;
  cout << "Ingrese el monto: ";
  cin >> monto;
  cout<<"Ingrese la cantidad de litros: ";
  cin >> litros;

  if (litros> 500)
  {
    res = monto * (1 - descuento3);
  }else if (litros <= 500 && litros >=301)
  {
    res = monto * (1 - descuento2);
  }else if (litros<301 && litros > 100)
  {
    res = monto * (1 - descuento1);
  }else{
    res = litros;
  }

  cout << "Su monto es de: " << res << endl;

  return 0;
}