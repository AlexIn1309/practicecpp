/* ROMAN TO INTEGER
 *	Recibe una cadena de string s,
 *	Con un valor Romano y este valor
 *	se debe convertir  numero entero */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
		int tamano = s.size();
		int suma = 0;
		char ultimoCaracter = 'a';
		for (char letra: s) {
			if (letra == 'M') {
				suma += 1000;
				if (ultimoCaracter == 'C') {
					suma -= 200;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'D') {
				suma += 500;
				if (ultimoCaracter == 'C') {
					suma -= 200;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'C') {
				suma += 100;
				if (ultimoCaracter == 'X') {
					suma -= 20;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'L') {
				suma += 50;
				if (ultimoCaracter == 'X') {
					suma -= 20;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'X') {
				suma += 10;
				if (ultimoCaracter == 'I') {
					suma -= 2;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'I') {
				suma += 1;
				cout << " Sumamos: "<<suma<<endl;
			}
			if (letra == 'V') {
				suma += 5;
				if (ultimoCaracter == 'I') {
					suma -= 2;
				}
				cout << " Sumamos: "<<suma<<endl;
			}
			cout << " Ultima letra: "<<ultimoCaracter<<endl;
			ultimoCaracter = letra;
		}
		return suma;
    }
};

int main(){
	Solution sol;
	cout << "Primera Prueba (III): "<<endl<<sol.romanToInt("III")<<endl<<" Esperado: 3"<<endl;
	cout << "Primera Prueba (LVIII): "<<endl<<sol.romanToInt("LVIII")<<endl<<" Esperado: 58"<<endl;
	cout << "Primera Prueba (MCMXCIV): "<<endl<<sol.romanToInt("MCMXCIV")<<endl<<" Esperado: 1994"<<endl;
	return 0;
}
