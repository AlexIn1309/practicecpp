/*  Inserta un elemento en la pila, si la pila esta vacia el nuevo nodo se convierte en el nodo raiz, de lo contrario se inserta al inicio de la pila y el nuevo nodo se convierte en el nodo raiz.
 *  Crear espacio para un nuevo nodo, asignar el valor del nuevo nodo, apuntar el nuevo nodo al nodo raiz actual, actualizar el nodo raiz para que apunte al nuevo nodo.
 *  Cargar el valor del nuevo nodo, apuntar el nuevo nodo al nodo raiz actual, actualizar el nodo raiz para que apunte al nuevo nodo.
 *  Cargar el puntero pila dentro del nuevo nodo, actualizar el nodo raiz para que apunte al nuevo nodo.
 *  Asignar el nuevo nodo a la pila, actualizar el nodo raiz para que apunte al nuevo nodo.
 *
 * */

#include <iostream>
#include <stdlib.h>
using namespace std;

// Creamos nuestra estructura de nodo para la pila
struct Nodo {
  // Este es el valor que se almacenara en el nodo
  int valor;
  // Este es el puntero que apuntara al siguiente nodo en la pila
  Nodo* siguiente;
};

void push(Nodo*& pila, int valor) {
  // Creamos un nuevo nodo
  Nodo* nuevoNodo = new Nodo();
  // Asignamos el valor al nuevo nodo
  nuevoNodo->valor = valor;
  // Apuntamos el nuevo nodo al nodo raiz actual
  nuevoNodo->siguiente = pila;
  // Actualizamos el nodo raiz para que apunte al nuevo nodo
  pila = nuevoNodo;
}

// Inciamos programa
int main(){
  // Creamos un puntero para la pila, inicialmente es nulo porque la pila esta vacia

  Nodo* pila = nullptr;

  int n1, n2, n3;

  cout << "Ingrese el valor del primer nodo: ";
  cin >> n1;
  cout << "Ingrese el valor del segundo nodo: ";
  cin >> n2;
  cout << "Ingrese el valor del tercer nodo: ";
  cin >> n3;
  push(pila, n1);
}
