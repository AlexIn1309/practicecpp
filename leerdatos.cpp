// Expresiones
// Escribe la siguiente expresion matematica en C++ y muestra el resultado en pantalla:
// a + b / c + d

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  float a, b, c, d, result;

  cout << "Ingrese el valor de a: ";
  cin >> a;
  cout << "Ingrese el valor de b: ";
  cin >> b;
  cout << "Ingrese el valor de c: ";
  cin >> c;
  cout << "Ingrese el valor de d: ";
  cin >> d;
  result = (a + b) / (c + d);
  cout << "El resultado de la expresion a + b / c + d es: " << result ;

  return 0;
}
