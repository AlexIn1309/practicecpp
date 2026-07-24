/* 3513. Number of Unique XOR Triplets I
* Medium
* You are given an integer array nums of length n,
* where nums is a permutation of the numbers in the
* range [1,n].
* A XOR triplet is defined as the XOR of three elements
* nums[i] XOR nums[j] XOR nums[k] where i <= j <= k.*/

// RETURN the number of unique XOR triplet values
// from all possible triplets [i,j,k].

/* EXAMPLE 1:
* Input: nums = [1,2]
* Output: 2
* Explanation:
* The possible XOR triplet values are:
* (0, 0, 0) → 1 XOR 1 XOR 1 = 1
* (0, 0, 1) → 1 XOR 1 XOR 2 = 2
* (0, 1, 1) → 1 XOR 2 XOR 2 = 1
* (1, 1, 1) → 2 XOR 2 XOR 2 = 2
* The unique XOR values are {1,2}, so the output is 2*/

/* EXAMPLE 2:
* Input: nums = [3,1,2]
* Output: 4
* EXPLANATION:
* The possible XOR triplet values include:
* (0, 0, 0) → 3 XOR 3 XOR 3 = 3
* (0, 0, 1) → 3 XOR 3 XOR 1 = 1
* (0, 0, 2) → 3 XOR 3 XOR 2 = 2
* (0, 1, 2) → 3 XOR 1 XOR 2 = 0
* The unique XOR values are {0,1,2,3}*/

/* CONSTRAINTS
* 1 <= n == nums.length <= 10(a la quinta potencia)
* 1 <= nums[i] <= n
* nums is a permutation of integers from 1 to n.*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>

using namespace std;

class Solution {
public:
	int uniqueXorTriplets(vector<int>& nums) {
		int longitud = nums.size();
		if(longitud == 1 || longitud == 2) return longitud;
		int potencia = 1;
		while(potencia <= longitud){
			potencia <<= 1;
		}
		return potencia;
	}
};

// Funcion auxiliar para generar una permutacion de 1 a n
vector<int> generarPermutacion(int n){
	vector<int> nums(n);
	// llena el vector con 1,2,3
	iota(nums.begin(), nums.end(), 1);
	
	// Desordenamos el vector para que sea una permutacion aleatoria real
	static mt19937 g(1337); // Semilla fija para resultados reproducibles
	shuffle(nums.begin(), nums.end(), g);	
	return nums;
}

int main(){
	Solution sol;

	cout<<" ==== PRUEBAS CON EJEMPLOS DEL PROBLEMA ====="<<endl;

	// Test 1: n = 1
	vector<int> test1 = {1}; 
	cout << "Test 1 (n=1) -> Esperando: 1 | Obtenido: " << sol.uniqueXorTriplets(test1)<<endl;
	// Test 2: Ejemplo 1 del enunciado (n = 2)
	vector<int> test2 = {1, 2}; 
	cout << "Test 2 (n=2) -> Esperando: 2 | Obtenido: " << sol.uniqueXorTriplets(test2)<<endl;
	// Test 3: Ejemplo 2 del enunciado (n = 3)
	vector<int> test3 = {3, 1, 2}; 
	cout << "Test 3 (n=3) -> Esperando: 4 | Obtenido: " << sol.uniqueXorTriplets(test3)<<endl;

	cout << "\n===== PRUEBAS ADICIONALES Y CASOS LIMITE ======" <<endl;

	// Test 4: n = 5 (Potencia de 2 superior mas cercana a 5 es 8)
	vector<int> test4 = generarPermutacion(5); 
	cout << "Test 4 (n=5) -> Esperando: 8 | Obtenido: " << sol.uniqueXorTriplets(test4)<<endl;
	
	// Test 5: Caso limite n = 100,000 (10^5)
	// La potencia de 2 superior a 100,000 es 131,072 (2^17)
	int n_grande = 100000; 
	vector<int> test5 = generarPermutacion(n_grande);
	cout << "Test 5 (n=100,000) -> Esperando: 131,072 | Obtenido: " << sol.uniqueXorTriplets(test5)<<endl;
}
