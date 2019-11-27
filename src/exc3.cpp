#include "../inc/cpp.h" 
using namespace std; 

int main() 
{ 
	try { 
		throw "good";
		throw 10; 
	} 
	catch (const char *excp) { 
		cout << "Caught " << excp << endl; 
} 
	catch (int excp) { 
		cout << "Caught " << endl; 
cout << excp << endl;
} 
	catch (...) { 
		cout << "Default Exception\n"; 
	} 
	return 0; 
}

