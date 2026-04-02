/*
 *  1. Creamos una variable *auxiliar* para almacenar el valor del nodo raiz actual, luego actualizamos el nodo raiz para que apunte al siguiente nodo en la pila, finalmente liberamos la memoria del nodo auxiliar para evitar fugas de memoria.
 *  2. Igualar el n a auxiliar es necesario para mantener una referencia al nodo que se va a eliminar, ya que después de actualizar el nodo raíz, perderíamos la referencia al nodo que queremos liberar.
 *  3. Pasar pila a siguiente nodo es necesario para mantener la estructura de la pila después de eliminar el nodo raíz, asegurando que el siguiente nodo se convierta en el nuevo nodo raíz.
 *  4. Eliminar auxiliar
 * */


#include <iostream>
#include <stdlib.h>
#include "menuClass.h"
#include "funcionesClass.h"
using namespace std;

#define ROJO "\033[31m"
#define VERDE "\033[32m"
#define AMARILLO "\033[33m"
#define AZUL "\033[34m"
#define RESET "\033[0m"

// Creamos nuestra estructura de nodo para la pila
struct Nodo {
  // Este es el valor que se almacenara en el nodo
  int num1;
  int num2;
  int process;
  // Este es el puntero que apuntara al siguiente nodo en la pila
  Nodo* siguiente;
};

void push(Nodo*& pila, int num1, int num2, int process) {
  // Creamos un nuevo nodo
  Nodo* nuevoNodo = new Nodo();
  // Asignamos el valor al nuevo nodo
  nuevoNodo->num1 = num1;
  nuevoNodo->num2 = num2;
  nuevoNodo->process = process;
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

std::string operacion(int process) {
    switch (process) {
        case 1: return "+";
        case 2: return "-";
        case 3: return "*";
        case 4: return "/";
        case 5: return "Potencia";
        case 6: return "Raiz cuadrada";
        default: return "Desconocida";
    }
}   

void imprimirPila(Nodo* pila) {
    Nodo* actual = pila;
    while (actual != nullptr) {
        cout << "Operacion: " << operacion(actual->process) 
             << " | Numero 1: " << actual->num1 
             << " | Numero 2: " << actual->num2 << endl;
        actual = actual->siguiente;
    }
}   
// Inciamos programa
int main(){
  Menu menu;
  Calculos calculos;
  bool flag = false; 
  int firstSwtch = 0;
  int num1 = 0;
  int num2 = 0;
  int process = 0;
  // Creamos un puntero para la pila, inicialmente es nulo porque la pila esta vacia
  Nodo* pila = nullptr;
  while(flag == false){
    menu.printMenu();
    cout << "Selecciona una opcion: ";
    cin >> firstSwtch;
    switch (firstSwtch) {
      case 1:
        cout << "Ingresa un numero: ";
        cin >> num1;
        cout << "Ingresa otro numero: ";
        cin >> num2;
        push(pila, num1, num2, 1);
        cout << "La suma de " << num1 << " y " << num2 << " es: " << calculos.sumarInt(num1, num2) << "\n";
        break;
      case 2:
        cout << "Ingresa un numero: ";
        cin >> num1;
        cout << "Ingresa otro numero: ";
        cin >> num2;
        push(pila, num1, num2, 2);
        cout << "La resta de " << num1 << " y " << num2 << " es: " << calculos.restaInt(num1, num2) << "\n";
        break;
      case 8:
        flag = true;
        break;
      default:
        cout << "Opcion no valida, por favor intente de nuevo." << endl;
        break;
    }
    imprimirPila(pila);

  }
}


