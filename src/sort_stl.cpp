// CPP program to implement 
// Sorting 
// Standard Template Library (STL) 
#include "../inc/template.h"
using namespace std; 

	template <class t>

t show(t a[]) 
{ 
	for(int i = 0; i < 10; ++i) 
		cout << a[i] << " "; 
	cout << endl;
} 

int main() 
{ 
	int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	char b[10]= {'d', 's', 'c', 'a', 'm', 'z', 'v', 'b', 't', 'w'}; 

	cout << "\nThe array before sorting is : " << endl; 

	show(a); 
	show(b); 

	sort(a, a+10); 
	sort(b, b+10); 

	cout << "\n\nThe array after sorting is : " << endl; 

	show(a); 
	show(b); 

	return 0; 

} 

