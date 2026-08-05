/* PALINDROME NUMBER
 *
 * */

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

		if (x<0 || (x != 0 && x % 10 == 0)) {
			return false;
		}
        string texto = to_string(x);
		int n = texto.size();

        for(int i = 0; i < n / 2 ;i++){

            if(texto[i] != texto[n - i - 1]){
				return false;
            }
        }
        return true;
    }
};

int main(){
	Solution sol;
	cout << "Primera Prueba (121): "<<sol.isPalindrome(121)<<endl;
	cout << "Segunda Prueba (1000021): "<<sol.isPalindrome(1000021)<<endl;
	cout << "Tercera Prueba (10): "<<sol.isPalindrome(10)<<endl;
	return 0;
}
