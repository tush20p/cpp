// CPP program to implement 
// Binary Search in 
// Standard Template Library (STL) 
#include "../inc/template.h"
using namespace std; 

void show(int a[], int arraysize) 
{ 
	for (int i = 0; i < arraysize; ++i) 
		cout << a[i] << " "; 
} 

int main() 
{ 
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
	int asize = sizeof(a) / sizeof(a[0]); 
	cout << "\nThe array is : "; 
	show(a, asize); 

	cout << "\nSo, we first sort the array"; 
	sort(a, a + asize); 

	cout << "\n\nThe array after sorting is : "; 
	show(a, asize); 

	cout << "\n\nNow, we do the binary search"; 

	cout << "\n\nLet's say we want to search for 6 in the array"; 

	if (binary_search(a, a + 10, 6)) 
		cout << "\nElement found in the array"; 
	else
		cout << "\nElement not found in the array"; 

	cout << "\n\nNow, say we want to search for 20";
 
	if (binary_search(a, a + 10, 20)) 
		cout << "\nElement found in the array" << endl; 
	else
		cout << "\nElement not found in the array" << endl; 

	return 0; 
} 

