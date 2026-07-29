/* 3518. SMALLEST PALINDROMIC REARREGEMENT II
 * HARD
 * You are given a palindromic string s and an integer k
 * Return the k-th lexicographically smallest palindromic permutation
 * of s. If there are fewer than k distinct palindromic permutations,
 * return an empty string.
 * Note: Different rearregement that yield the same palindromic string are considered identical and are counted once.  */

/* EXAMPLE 1:
 * Input: s = "abba", k = 2
 * Output: "baab"
 * EXPLANATION:
 * - The two distinct palindromic rearregement of "abba" are "abba" and "baab".
 * - Lexicographically, "abba" comes before "baab". Since k = 2, the output is "baab". */

/* EXAMPLE 2:
 * Input: s = "aa", k = 2
 * Output: ""
 * EXPLANATION:
 * - There is only one palindromic rearregement: "aa".
 * - The output is an empty string since k = 2 exceeds the number of possible rearregements*/

/* EXAMPLE 3:
 * Input: s = "bacab", k = 1
 * Output: "abcba"
 * EXPLANATION:
 * - The two distinct palindromic rearregement of "bacab" are "abcba" and "bacab".
 * - Lexicographically, "abcba" comes before "bacab". Since k = 1, the output is "abcba"*/

/* CONSTRAINTS
 * 1 <= s.length <= 10 a la cuarta potencia
 * s consists of lowercase English letters.
 * s is guaranteed to be palindromic.
 * 1 <= k <= 10 a la sexta potencia
 * */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
	string smallestPalindrome(string s, int k){
		
	}
}

int main(){
	Solution sol;
	cout<<"Prueba 1: "<< sol.smallestPalindrome("abba", 2)<<endl;
	cout<<"Esperado 1: 'baab'"<<endl;
	cout<<"Prueba 1: "<< sol.smallestPalindrome("aa", 2)<<endl;
	cout<<"Esperado 1: ''"<<endl;
	cout<<"Prueba 1: "<< sol.smallestPalindrome("bacab", 1)<<endl;
	cout<<"Esperado 1: 'abcba'"<<endl;
}
