/* 20. VALID PARENTHESES
 * Given a string 's' containing just the characters '(', ')', '{', '}', '[' and ']'
 * determine if the input string is valid 
 * An Input String is valid if
 * 1. Open Brackets must be closed by the same type of Brackets
 * 2. Open Brackets must be closed in the correct order
 * 3. Every close brackets has a corresponding open bracket of the same type*/

/* Example 1
 * Input: s = "()"
 * Output: true */

/* Example 2
 * Input: s = "()[]{}"
 * Output: true */

/* Example 3
 * Input: s = "(]"
 * Output: false */

/* Example 4
 * Input: s = "([])"
 * Output: true */

/* Example 5
 * Input: s = "([)]"
 * Output: false */

#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
		// Mapeamos los caracteres de cierre y apertura
		unordered_map<char, char> parejas = {{')','('},{']','['},{'}','{'}};

		stack<char> pila;
		
		for (char caracterer: s) {
			if (parejas.count(caracterer)) {
				if (pila.empty() || pila.top() != parejas[caracterer]) {
					return false;
				}
				pila.pop(); // saca par
			}else {
				// Guarda caracter de apertura
				pila.push(caracterer);
			}
		}
		return pila.empty();
    }
};

int main (int argc, char *argv[]) {
	Solution sol;
	std::cout << "Prueba 1: ('()')"<<endl<<sol.isValid("()")<<endl<<"Esperado: true"<<endl;
	std::cout << "Prueba 2: ('()[]{}')"<<endl<<sol.isValid("()[]{}")<<endl<<"Esperado: true"<<endl;
	std::cout << "Prueba 3: ('(]')"<<endl<<sol.isValid("(]")<<endl<<"Esperado: false"<<endl;
	std::cout << "Prueba 4: ('([])')"<<endl<<sol.isValid("([])")<<endl<<"Esperado: true"<<endl;
	std::cout << "Prueba 5: ('([)]')"<<endl<<sol.isValid("([)]")<<endl<<"Esperado: true"<<endl;
	return 0;
}
