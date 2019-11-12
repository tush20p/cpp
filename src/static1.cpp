#include "../inc/static1.h"
using namespace std;

class A
{
	int x;
	static int y;

	public:

	static int z;

	void set_data()
	{
		cout << "enter the data" << endl;
		cin >> x;
	}

	void print_data()
	{
		cout << "x- " << x << endl;
		cout << "y- " << y << endl;
	}

};

int A::y=6;
int A::z=3;

int main()
{
	A obj;
cout << "z- " << A::z << endl;
	obj.set_data();
	obj.print_data();
}
