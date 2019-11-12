#include "../inc/staticfun1.h"
using namespace std;

class A
{
	int x;
	static int y;

	public:
	A()
	{
		x=10;
	}
	static void print_data()
	{
//		cout << "x-" << x << endl;
		cout << "y-" << y << endl;
	}
};
int A::y=0;

int main()
{
	A obj;

	A::print_data();
}
