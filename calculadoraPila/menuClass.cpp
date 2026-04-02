#include <iostream>
#include "menuClass.h"

#define ROJO "\033[31m"
#define VERDE "\033[32m"
#define AMARILLO "\033[33m"
#define AZUL "\033[34m"
#define RESET "\033[0m"

  void Menu::printMenu(){
    std::cout << AZUL << "==================" << RESET << "\n";
    std::cout << AZUL << " CALCULADORA PRO " << RESET << "\n";
    std::cout << AZUL << "1) Suma" << RESET << "\n";
    std::cout << AZUL << "2) Resta" << RESET << "\n";
    std::cout << AZUL << "3) Multiplicacion" << RESET << "\n";
    std::cout << AZUL << "4) Division" << RESET << "\n";
    std::cout << AZUL << "5) Potencia" << RESET << "\n";
    std::cout << AZUL << "6) Raiz cuadrada" << RESET << "\n";
    std::cout << AZUL << "7) Ver historial" << RESET << "\n";
    std::cout << AZUL << "8) Salir" << RESET << "\n";
    std::cout << AZUL << "Seleccione una opcion: " << RESET << "\n";
  }
