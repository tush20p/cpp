#include "../inc/cpp.h" 
using namespace std; 

int main() 
{ 
	try 
	{ 
		try 
		{ 
			throw 20; 
		} 
		catch (int n) 
		{ 
			cout << "Handle Partially "; 
cout << "output - " << n << endl;
			throw; //Re-throwing an exception 
		} 
	} 
	catch (int n) 
	{ 
		cout << "Handle remaining " << endl;; 
	} 
	return 0; 
}

