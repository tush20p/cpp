#include "../inc/dma.h"

using namespace std;

int main ()
{

	int i,n;
	int *p=NULL;

	cout << "How many numbers would you like to type? ";
	cin >> i;

	p = new int[i];

	if (p == NULL)
	{
		cout << "Error: memory could not be allocated";
	}
	else
	{
		for (n=0; n<i; n++)
		{
			cout << "Enter number: ";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n=0; n<i; n++)
			cout << p[n] << "  ";
			cout << endl;
		delete[] p;
	}
	return 0;
}
