/* SHIFT 2D GRID
* Given a 2D grid of size m * x and an integer k.
* You need to shift the grid k times
* In one shift operation:
* Element at grid[i][j] movevs to grid[i][j + 1].
* Element at grid[i][n - 1] movevs to grid[i + 1][0].
* Element at grid[m - 1][n - 1] movevs to grid[0][0].
* Return the 2D grid after applying shift operation k times*/

/* EXAMPLE 1
* INPUT: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
* OUTPUT: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1*/

/* EXAMPLE 2
* Input: grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
* Output: [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]*/

#include <iostream>
#include <vector>

using namespace std;

// 1. Función auxiliar para imprimir arreglos 2D
// En JS hacías console.log(grid). En C++ creamos este helper con un par de loops:
void printGrid(const vector<vector<int>>& grid) {
    cout << "[\n";
    for (const auto& row : grid) {
        cout << "  [ ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << "]\n";
    }
    cout << "]\n";
}

// 2. La clase de LeetCode
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int filas = grid.size();
    int columnas = grid[0].size();
    int total = filas * columnas;
    
    /* CLAVE
    * Si k es mayor al total de elementos, dat una vuelta completa
    * regresa la matriz a su estado original.
    * Usamos % para no hacer giros de mas.*/

    k = k % total;
    
    // Si k es 0, no hay que mover nada
    if (k == 0)return grid;
    // Creamos una matriz donde colocaremos los valores en sus nuevas posiciones
    vector<vector<int>> resultado(filas, vector<int>(columnas));
    for(int i = 0; i < filas;i++){
	    for(int j = 0; j < columnas; j++){
		    // 1. Obtenemos la posicion lineal del elemento (i, j)
		    int pos1D = i * columnas + j;
		    // 2. Desplazamiento k circular
		    int nuevaPosicion = (pos1D + k) % total;

		    // 3. Paso a 2D: Convertir la nueva posicion 1D a coordenadas (fila, columna)
		    int nuevaFila = nuevaPosicion / columnas;
		    int nuevaCol = nuevaPosicion % columnas;

		    // 4. Copiamos el elemento en su destino correcto
		    resultado[nuevaFila][nuevaCol] = grid[i][j];
            }
        }
        return resultado; // Retorna la matriz modificada
    }
};

// 3. El punto de entrada que ejecuta tu código
int main() {
    Solution sol;

    // Caso de prueba 1
    vector<vector<int>> grid1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int k1 = 1;

    cout << "--- Ejemplo 1 ---" << endl;
    cout << "Original:" << endl;
    printGrid(grid1);

    vector<vector<int>> result1 = sol.shiftGrid(grid1, k1);

    cout << "Resultado con k = " << k1 << ":" << endl;
    printGrid(result1);

    return 0;
}
