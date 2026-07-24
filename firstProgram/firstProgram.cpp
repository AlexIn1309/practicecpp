/* DEVELOPING YOUR FIRST PROGRAM
 * Multiply by 2
 * First, let's create a program that asks the user to enter an integer,
 * waits for them to input an integer,
 * then tells them what 2 times that number is. The program should 
 * produce the following output
*/ 

/* EXAMPLE
 * Enter an integer: 4
 * Double that number is: 8
*/

#include <iostream>
using namespace std;

int main(){
	cout<<"Enter an integer: "<<endl;
	int leftshift = 0;
  cin >> leftshift;
	cout<<"Double that number is: "<< (leftshift << 1) << endl;
  return 0;
}
