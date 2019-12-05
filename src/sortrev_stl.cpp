// A C++ program to demonstrate working of sort(), 
// reverse() 
#include "../inc/template.h"
using namespace std; 

void show(int a[],int p)
{
	for (int i=0; i<p; i++) 
		cout << a[i] << " "; 
}
int main() 
{ 
	// Initializing vector with array values 
	int arr[] = {10, 20, 5, 23 ,42 , 15}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	vector<int> vect(arr, arr+n); 

	cout << "Vector is: "; 
	show(arr,n);

	// Sorting the Vector in Ascending order 
	//sort(vect.begin(), vect.end()); 
	sort(arr, arr+n); 
	/*	for (int i=0; i<6; i++) 
		cout << vect[i] << " "; */

	cout << "\nVector after sorting is: "; 
	show(arr,n);

	// Reversing the Vector 
	reverse(arr,arr+n); 

	cout << "\nVector after reversing is: "; 
	show(arr,n);

	cout << "\nMaximum element of vector is: "; 
	cout << *max_element(vect.begin(), vect.end()); 

	cout << "\nMinimum element of vector is: "; 
	cout << *min_element(vect.begin(), vect.end()); 

	// Starting the summation from 0 
	cout << "\nThe summation of vector elements is: " ; 
	cout << accumulate(vect.begin(), vect.end(), 0);
	cout << endl; 

	return 0; 
} 

