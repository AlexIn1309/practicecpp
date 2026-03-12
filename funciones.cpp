// Calcula a * b desde una funcion y retorna el resultado a main para mostrarlo en pantalla

#include <iostream>

// Esta es la funcion que multiplica dos numeros y retorna el resultado
int Multiply(int a, int b) {
  return a * b;
}

// Inicio del programa
int main(){
  int a, b;
  std::cout << "Ingrese el valor de a: ";
  std::cin >> a;
  std::cout << "Ingrese el valor de b: ";
  std::cin >> b;
  int result = Multiply(a, b);
  
  std::cout << "El resultado de multiplicar "<<a<<" y "<<b<<" es: " << result << std::endl;

}
