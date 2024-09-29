/*
Realizar nuevamente el ejercicio 8 pero ahora deve devolver además la posición en la que fue encontrado cada uno de los minimos
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero, menor1,menor2=0,posicion1=0,posicion2=0;
  int i=0;
  bool bandera= false;

  cout<<"ingrese el numero: ";
  cin>>numero;
  menor1=numero;
  posicion1=1;
  while(numero !=0){
    if(numero <menor1){
      if(!bandera && i>0){
        menor2=menor1;
        posicion2=posicion1;
        menor1=numero;
        posicion1=i+1;
        bandera=true;
      }else{
        menor2=menor1;
        posicion2=posicion1;
        menor1=numero;
        posicion1=i+1;
      }
    }else if(!bandera && i>0){
      menor2=numero;
      posicion2=i+1;
      bandera=true;
    }else if(numero < menor2){
      menor2=numero;
      posicion2=i+1;
    }
    i++;

    cout<<"ingrese un numero: ";
    cin>>numero;
  }
  cout<<"el primer numero menor es: "<<menor1<<" en la posicion: "<<posicion1<<endl;
  cout<<"el segundo numero menor es: "<<menor2<<" en la posicion: "<<posicion2<<endl;
    return 0;
}