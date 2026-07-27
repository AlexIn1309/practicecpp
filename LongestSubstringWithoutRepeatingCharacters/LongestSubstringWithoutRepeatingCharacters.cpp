/* Longest Substring Without Repeating Characters
* MEDIUM
* Given a string 's', find the length
* of the longest substring without duplicate characters
* EXAMPLE 1
* Input: s = "abcabcdb"
* Output: 3
* Explanation: The answer is "abc" */

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		std::unordered_set<char> miSet;
		int izquierda = 0;
		int totalSubstrings = 0;
		int n = s.size();

		// El puntero 'derecha' explora el string
		for(int derecha = 0; derecha < n; derecha++){
			// Mientras el caracter actual ya este en nuestro arreglo
			while(miSet.count(s[derecha])){
			miSet.erase(s[izquierda]);
			izquierda++;
			}
		// Se agrega el caracter actual y actualiza largo maximo
		miSet.insert(s[derecha]);
		totalSubstrings = std::max(totalSubstrings, derecha - izquierda + 1);
		}
		return totalSubstrings;
	}
};

int main(){
	Solution sol;
	cout<<" ==== PRUEBAS ==== "<<endl;
	cout << "Test 1: 'abcabcdb' -> Resultado: " << sol.lengthOfLongestSubstring("abcabcdb") << " | Esperado: 4" << endl;
}
