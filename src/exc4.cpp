#include "../inc/cpp.h" 
using namespace std; 

void fun(int *ptr, int x) 
{ 
	if (ptr == NULL) 
		throw ptr; 
	if (x == 0) 
		throw x; 
	/* Some functionality */
} 

int main() 
{ 
	try { 
		fun(NULL, 0); 
	} 
	catch(int *x)
{
cout << "x- " << x << endl;
}
	catch(...) { 
		cout << "Caught exception from fun()"; 
	} 
	return 0; 
}

