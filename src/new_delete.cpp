// C++ program to illustrate dynamic allocation and deallocation of memory using new and delete 
#include "../inc/dma.h"

using namespace std; 

int main ()
{ 
	int *p = NULL; 
	p = new int; 
	if (!p)
	{ 
		cout << "allocation of memory failed\n"; 
	}
	else
	{ 
		*p = 29; 
		cout << "Value of p: " << *p << endl; 
	} 

	float *r = NULL:
		r = new float(75.25); 
	if (!r)
	{ 
		cout << "allocation of memory failed\n"; 
	}
	else
	{
		cout << "Value of r: " << *r << endl; 
	}

	int n = 5; 
	int *q=NULL;
	q = new int[n]; 

	if (!q) 
	{
		cout << "allocation of memory failed\n"; 
	}
	else
	{ 
		for (int i = 0; i < n; i++) 
			q[i] = i+1; 

		cout << "Value store in block of memory: "; 
		for (int i = 0; i < n; i++) 
			cout << q[i] << " "; 
		cout << endl;
	} 

	delete p; 
	delete r; 

	delete [] q; 

	return 0; 
} 

