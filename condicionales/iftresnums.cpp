/* Escriba un programa que lea tres numeros y determine
 * cual de ellos es el mayor*/

#include<iostream>
#include<algorithm>

int main(){
  int n1, n2, n3;
  std::cout << "Ingresa un numero: "<<std::endl;
  std::cin >> n1;
  std::cout << "Ingresa un numero: "<<std::endl;
  std::cin >> n2;;
  std::cout << "Ingresa un numero: "<<std::endl;
  std::cin >> n3;
  if (n1 == n2 && n2 == n3){
	  std::cout << "Son el mismo numero" << std::endl;
	  return 0;
  }
  int maximo = std::max({n1,n2,n3}); 
	  std::cout << "El numero mas grande es"<<maximo << std::endl;
  return 0;
}
