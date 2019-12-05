// C++ code to demonstrate the working of 
// max() and min() 
#include "../inc/template.h"
using namespace std; 
int main() 
{ 
	// Initializing valarray 
       std::valarray<int> varr = { 10, 2, 20, 1, 30 }; 
	
	// Displaying largest element of valarray 
	cout << "The largest element of valarray is : "; 
	cout << varr.max() << endl; 
	
	// Displaying smallest element of valarray 
	cout << "The smallest element of valarray is : "; 
	cout << varr.min() << endl; 

	return 0; 
	
} 

