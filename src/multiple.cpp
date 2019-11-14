// C++ program to explain 
// multiple inheritance 
#include "../inc/multiple.h" 
using namespace std; 

// first base class 
class Vehicle { 
	public: 
		Vehicle() 
		{ 
			cout << "This is a Vehicle" << endl; 
		} 
}; 

// second base class 
class FourWheeler
{ 
	public: 
		FourWheeler() 
		{ 
			cout << "This is a 4 wheeler Vehicle" << endl; 
		} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle, public FourWheeler 
{ 
	public: 
		Car() 
		{ 
			cout << "This is a car" << endl; 
		} 

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Vehicle obj1;
	FourWheeler obj2;
	Car obj; 
	return 0; 
} 

