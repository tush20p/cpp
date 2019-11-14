// C++ program to explain 
// Single inheritance 
#include "../inc/single.h" 
using namespace std; 

// base class 
class Vehicle 
{ 
	public: 
		Vehicle() 
		{ 
			cout << "This is a Vehicle 1" << endl; 
		} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle
{ 
	public: 
		Car() 
		{ 
			cout << "This is a Vehicle 2" << endl; 
		} 

}; 

int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Vehicle obj1;
	Car obj; 
	return 0; 
} 

