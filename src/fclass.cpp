#include "../inc/fclass.h"
using namespace std;

class A
{
	int x;
	int y;

	public:

	void set_data(int a,int b)
	{
		x=a,y=b;
	}
	friend class B;
};

class B
{
	int m;
	int n;

	public:

	void set_data(int a,int b)
	{
		m=a,n=b;
	}

	void print_data()
	{
		cout << "m - " << m << endl;
		cout << "n - " << n << endl;
	}
	void print_data1(A &t)
	{
		cout << "x - " << t.x << endl;
		cout << "y - " << t.y << endl;
	}
};

int main()
{
	class A a1;

	a1.set_data(10,20);
//	a1.print_data();

	class B b1;
	b1.set_data(30,50);
	b1.print_data();
	b1.print_data1(a1);
}
