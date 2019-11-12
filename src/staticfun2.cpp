#include "../inc/staticfun2.h"
using namespace std;

class A
{
	int x;
	static int y;

	A()
	{
		cout << "constructor" << endl;
		x=10;
cout << "x-" << x << endl;
cout << "y-" << y << endl;
	}

	public:
	static void creat()
	{
		A obj;
	}

};

int A::y=1;

int main()
{
	A::creat();
}
