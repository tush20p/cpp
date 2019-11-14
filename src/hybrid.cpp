// C++ program for Hybrid Inheritance 

#include "../inc/hybrid.h" 
using namespace std; 

// base class 
class Vehicle 
{ 
	public: 
		Vehicle() 
		{ 
			cout << "This is a Vehicle" << endl; 
		} 
}; 

//base class 
class Fare 
{ 
	public: 
		Fare() 
		{ 
			cout<<"Fare of Vehicle\n"; 
		} 
}; 

// first sub class 
class Car: public Vehicle 
{ 

}; 

// second sub class 
class Bus: public Vehicle, public Fare 
{ 

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base class 
	Car obj1;
	Bus obj2; 
	return 0; 
} 

