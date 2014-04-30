#include <iostream>
#include <string>
#include "function.h"
using namespace std;

int main()
{
	string name;
	
	cout << "Hello, what is your name human?"; 
	cin >> name;
	cout << "\nGreetings " << name << "\n\n";
	
	//#4 - Call function from header file:
	hello();
	
	cout << "\nOutput text\n"; 
	//reattempting to comment to ensure program functions
	
	return 0;
	
	}
	
