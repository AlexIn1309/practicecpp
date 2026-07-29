#include<iostream>

int main(){
	int n, suma = 0;

	std::cout << "Digita el numero de elementos: ";

	std::cin >> n;

	for (int i= 0; i<=n;i++){
		suma += i;
	
	}

	std::cout<< "La suma es: " << suma<<std::endl;

	return 0;

}
