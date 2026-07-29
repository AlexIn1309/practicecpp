/* Realice un programa que lea un valor entero y determine si se trata de un numero par o impar*/

#include<iostream>

int main(){
  int numero = 0;

  std::cout << "Digita un numero: ";
  std::cin >> numero;
  if (numero==0){

  std::cout << "El numero es 0. "<<std::endl;
  }else if (numero %2 == 0) {
    std::cout << "El numero es par. "<<std::endl;
  }else {
    std::cout << "El numero es impar. "<<std::endl;
  }
  return 0;
}
