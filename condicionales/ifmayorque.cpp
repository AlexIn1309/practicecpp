/* Escriba un programa que lea dos numeros y determine
 * cual de ellos es el mayor*/

#include<iostream>

int main(){
  int primerNum = 0;
  int segundoNum = 0;
  std::cout << "Ingresa un numero: "<<std::endl;
  std::cin >> primerNum;
  std::cout << "Ingresa un numero: "<<std::endl;
  std::cin >> segundoNum;
  if (primerNum>segundoNum)std::cout << "Primer numero es mas grande" << std::endl;
  if (segundoNum>primerNum)std::cout << "Segundo numero es mas grande" << std::endl;
  if (segundoNum == primerNum)std::cout << "Son el mismo numero" << std::endl;
  
  return 0;
}
