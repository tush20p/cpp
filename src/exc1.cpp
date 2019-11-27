#include "../inc/cpp.h"
using namespace std;

double division(int a, int b) 
{
	if( b == 0 ) 
	{
		throw "Division by zero condition!";
	}
	return (a/b);
}

int main () 
{
	int x = 50;
	int y = 5;
	int l = 0;
	double z = 0;
	double m = 0;

	try 
	{
		z = division(x, y);
		cout << z << endl;
		m = division(x, l);
		cout << m << endl;
	}
	catch (const char* msg) 
	{
		cout << msg << endl;
	}

	return 0;
}
