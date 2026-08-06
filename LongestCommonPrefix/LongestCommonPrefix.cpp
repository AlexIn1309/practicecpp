/* Longest Common Prefix
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "" */

/* Example 1
 * Input: strs = ["flower", "flow", "flight"]
 * Output: "fl"*/

/* Example 2
 * Input: strs = ["dog", "racecar", "car"]
 * Output: ""*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        string prefijoComun = "";
        bool bandera = true;
        int contador = 0;

        if (strs.empty()) return "";

        while (bandera) {
            // Guardar la letra de referencia
            char primera_letra = strs[0][contador];
			cout<<endl<<primera_letra<<endl;

            // Evalúa si TODAS las palabras coinciden en el índice 'contador'
            bool todas_iguales = std::all_of(strs.begin(), strs.end(), [primera_letra, contador](const string& str) {
                return !str.empty() && str[contador] == primera_letra;
            });

            bandera = todas_iguales;
			if (!bandera) {
				break;
			}
			prefijoComun.push_back(primera_letra);
            contador++;
        }

        return prefijoComun; // Agregado el return que faltaba
    }
};

int main(){
    Solution sol;

    cout << "Primera Prueba (['flower', 'flow', 'flight']): " << endl 
         << sol.longestCommonPrefix({"flower", "flow", "flight"}) << endl 
         << " Esperado: fl" << endl;

    cout << "Segunda Prueba (['dog', 'racecar', 'car']): " << endl 
         << sol.longestCommonPrefix({"dog", "racecar", "car"}) << endl 
         << " Esperado: " << endl;

    return 0;
}
