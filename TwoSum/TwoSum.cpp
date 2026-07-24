/* TWO SUM
* Easy
* Given an array of integers nums and 
* an integer 'target', return indice of 
* two numbers such that they add up
* to target
*
* You may assume that each input would have exactly one solution
* and you may not use the same element twice.*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target){
		std::unordered_map<int, int> apuntando;

		for(int i = 0; i < nums.size(); i++){
			int objetivo = target - nums[i];

			// El objetivo ya esta apuntado
			if(apuntando.find(objetivo) != apuntando.end()){
				// Regresamos el indice y el actual
				return {apuntando[objetivo], i};
			}
			apuntando[nums[i]] = i;
		}
		return {};
	}
		
};

int main(){
	Solution sol;

	// Datos de prueba
	vector<int> nums = {2,7,11,15};
	int target = 9;

	// Llama a funcion
	vector<int> resultado = sol.twoSum(nums, target);

	// Resultado
	if(!resultado.empty()){
		cout<<"Indices encontrados: ["<< resultado[0] << ", "<< resultado[1] << "]"<<endl;
	}else{
		cout<<"No hay solucion. "<<endl;
	}
}
