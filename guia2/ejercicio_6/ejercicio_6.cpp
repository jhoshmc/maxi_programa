/*
Una casa de video juegos otorga un descuento dependiendo del importe de la compra realizada
según los siguientes valores:
  .Si el importe es menor a ARS 1000, no hay descuento.
  .Si el imoprte es ARS 1000 a más pero menos a ARS 5000, aplica un descuento del 10%.
  .Si el importe es ARS 5000 o más, aplica un descuento del 18%.
  Hacer un programa para ingresar un importe de venta y luego muestre por pantalla el importe final con el descuento que corresponda.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  float const descuento1 = 0.10;
  float const descuento2 = 0.18;
  float importe;
  cout << "Ingrese el importe: ";
  cin >> importe;

  if (importe > 5000)
  {
    importe = importe * (1 - descuento2);
    cout << "su monto final es de: " << importe << " por un descuento de: 18%";
  }else if (importe > 1000)
  {
    importe = importe * (1 - descuento1);
    cout << "su monto final es de: " << importe << " por un descuento de: 10%";
  }else{

  cout << "El monto total a pagar es de: " ;
  }


  return 0;
}