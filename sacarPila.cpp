/*
 *  1. Creamos una variable *auxiliar* para almacenar el valor del nodo raiz actual, luego actualizamos el nodo raiz para que apunte al siguiente nodo en la pila, finalmente liberamos la memoria del nodo auxiliar para evitar fugas de memoria.
 *  2. Igualar el n a auxiliar es necesario para mantener una referencia al nodo que se va a eliminar, ya que después de actualizar el nodo raíz, perderíamos la referencia al nodo que queremos liberar.
 *  3. Pasar pila a siguiente nodo es necesario para mantener la estructura de la pila después de eliminar el nodo raíz, asegurando que el siguiente nodo se convierta en el nuevo nodo raíz.
 *  4. Eliminar auxiliar
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

void pop(Nodo*& pila) {
  if (pila != nullptr) {
    // Creamos una variable auxiliar para almacenar el valor del nodo raiz actual
    Nodo* auxiliar = pila;
    // Actualizamos el nodo raiz para que apunte al siguiente nodo en la pila
    pila = pila->siguiente;
    // Liberamos la memoria del nodo auxiliar para evitar fugas de memoria
    delete auxiliar;
  } else {
    cout << "La pila esta vacia, no se puede eliminar un nodo." << endl;
  }
}

// Inciamos programa
int main(){
  // Creamos un puntero para la pila, inicialmente es nulo porque la pila esta vacia
  Nodo* pila = nullptr;

  // Inicializa las variables para almacenar los valores de los nodos
  int n1, n2, n3;

  // Pedimos al usuario que ingrese los valores de los nodos y los agregamos a la pila
  cout << "Ingrese el valor del primer nodo: ";
  cin >> n1;
  push(pila, n1);
  cout << "Ingrese el valor del segundo nodo: ";
  cin >> n2;
  push(pila, n2);
  cout << "Ingrese el valor del tercer nodo: ";
  cin >> n3;
  push(pila, n3);

  // Saca valores de la pila
  cout << "Sacando el nodo raiz de la pila..." << endl;
  while (pila != nullptr) {
    cout << "Valor del nodo raiz: " << pila->valor << endl;
    pop(pila);
  }
}
