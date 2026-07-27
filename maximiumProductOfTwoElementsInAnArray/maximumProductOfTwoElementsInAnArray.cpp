/* 1464. Maximum Product of Two Elements in an Array

Easy

Hint

Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1). 

*/


#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::sort

// Función que resuelve el reto
int maxProduct(std::vector<int>& nums) {
    // Ordena de menor a mayor
    std::sort(nums.begin(), nums.end());
    
    int n = nums.size();
    // Los dos más grandes están al final (índices n-1 y n-2)
    return (nums[n - 1] - 1) * (nums[n - 2] - 1);
}

int main() {
    // Caso de prueba 1: Ejemplo normal
    std::vector<int> prueba1 = {3, 4, 5, 2};
    std::cout << "Prueba 1 [3, 4, 5, 2]: " << maxProduct(prueba1) << " (Esperado: 12)" << std::endl;

    // Caso de prueba 2: Con números duplicados más grandes
    std::vector<int> prueba2 = {5, 5, 2, 4};
    std::cout << "Prueba 2 [5, 5, 2, 4]: " << maxProduct(prueba2) << " (Esperado: 16)" << std::endl;

    // Caso de prueba 3: Arreglo pequeño
    std::vector<int> prueba3 = {1, 10};
    std::cout << "Prueba 3 [1, 10]: " << maxProduct(prueba3) << " (Esperado: 0)" << std::endl;

    return 0;
}
