/* Una importante cadena de delivery cuenta con una promocion por tiempo limitado en la que otorga un 15% de descuento sobreel total del valor de la compra realizada.
Hacer un programa pra solicitar el monto total y el mismo calcule y emita por pantalla el total a cobrar 
con el descuento aplicado
*/
#include <iostream>
using namespace std;
int main(int argc, char const *arvg[]){
  const float descuento= 0.15;
  float monto;
  float totalAPagar;
  cout << "Ingrese el monto: ";
  cin >> monto;
  // como el descuento es del 15%, se puso 0,15; 1 representaria el 100% y en este cado de la resta 0.85, 
  // seria el 85% del monto que va a pagar
  totalAPagar = monto * (1 - descuento);

  cout << "El monto total a pagar es de: " << totalAPagar;
  return 0;
}