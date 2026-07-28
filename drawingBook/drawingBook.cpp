/* DRAWING BOOK */

#include <iostream>
#include <vector>
#include <algorithm>

int pageCount(int n, int p) {
    int desdeInicio = p / 2;
    int desdeFinal = (n / 2) - (p / 2);
    
    return std::min(desdeInicio, desdeFinal);
}

int main() {
    std::cout << "Prueba 1 [3, 4]: " << pageCount(3,4) << std::endl;

    std::cout << "Prueba 2 [6, 2]: " << pageCount(6,2) << std::endl;

    std::cout << "Prueba 3 [5, 4]: " << pageCount(5,4) << std::endl;

    return 0;
}
