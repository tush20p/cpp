// C++ program to demonstrate working of lower_bound() 
// and upper_bound(). 
#include "../inc/template.h"
using namespace std; 

int main() 
{ 
	// Initializing vector with array values 
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	//int p,q;
	vector<int> vect(arr, arr+n); 

	// Sort the array to make sure that lower_bound() 
	// and upper_bound() work. 
	sort(vect.begin(), vect.end()); 

	// Returns the first occurrence of 20 
	vector<int>::iterator q = lower_bound(vect.begin(), vect.end(), 20); 

	// Returns the last occurrence of 20 
	 vector<int>::iterator p = upper_bound(vect.begin(), vect.end(), 20); 

	cout << "The lower bound is at position: "; 
	cout << q-vect.begin() << endl; 

	cout << "The upper bound is at position: "; 
	cout << p-vect.begin() << endl; 

	return 0; 
} 

