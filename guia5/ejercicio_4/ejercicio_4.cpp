/*
hacer un programa que solicite dos números y luego muestre los números entre el menor y el mayor de ellos. USANDO WHILE
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1,n2;
  int inicio,fin;
  cout<<"\t Ingrese numeros enteros\n";
  cout <<"Ingrese el primer numero: ";
  cin>>n1;
  cout<<"Ingrese el segundo numero: ";
  cin>>n2;

  if(n1>n2){
    inicio=n2;
    fin=n1;
  }else{
    inicio=n1;
    fin=n2;
  }

  while(inicio <= fin){
    cout<<" numero: "<<inicio<<endl;
    inicio++;
  }

  return 0;
}