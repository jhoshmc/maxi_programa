/*
El negocio de desinfectante antes mencionado vende además detergente syelto, y los 
precieos se aplican según la siguie escala:
  a. 25 ARS por litro los primeros 50 litros.
  b. 20 ARS por litro si la venta es de 51 a 200 litros.
  c. 15 ARS por litro si la venta es de 201 a 500 litros.
  d. 10 ARS por litro si la venta es de mas de 500 litros.

Además, si paga en ejectivo, tiene adicional del 10% sobre el mismo importe final.
Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago(ingresará 1 si paga en efectivo y 0 con cualquier otro medio de pago) y calcule y emita por pantalla el monto final a abonar por cliente.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  float litros, pago;
  float total;
  cout << "Ingrese la cantidad de litros: ";
  cin >> litros;
  cout << "\t formas de pago: \n 1: efectivo, 0: cualquier otro medio" << endl;
  cout << "Ingrese la forma de pago: ";
  cin >> pago;

  if (litros > 500)
  {
    total = litros * 10;
  }else if (litros <= 500 && litros >=201)
  {
    total = litros * 15;
  }else if (litros <= 200 && litros >= 50)
  {
    total = litros * 25;
  }
  
  if (pago == 1)
  {
    total *= 0.90;
  }

  cout << "El monto a pagar es de: " << total << endl;

  return 0;
}