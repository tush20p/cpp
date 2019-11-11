#include "../inc/friendpriclass.h" 
using namespace std;
class A;
class B
{
	int m;
	int n;

	public:

	void set_data(int a,int b)
	{
		m=a,n=b;
	}
	void print_data(A &temp);
	void print_data1(A &temp);

	void print_data(B &temp);
	void print_data1(B &temp);

};

class A
{
	int x;
	int y;

	public:

	void set_data(int a,int b)
	{
		x=a,y=b;
	}
	friend void B::print_data(A &temp);
	friend void B::print_data1(A &temp);
};

void B::print_data(A &temp)
{
	cout << "..........." << endl;
	cout << "x - " << temp.x << endl;
	cout << "y - " << temp.y << endl;
}

void B::print_data1(A &temp)
{
	cout << "x - " << temp.x << endl;
	cout << "y - " << temp.y << endl;
	cout << "..........." << endl;
}

void B::print_data(B &temp)
{
	cout << "..........." << endl;
	cout << "m - " << temp.m << endl;
	cout << "n - " << temp.n << endl;
}

void B::print_data1(B &temp)
{
	cout << "m - " << temp.m << endl;
	cout << "n - " << temp.n << endl;
	cout << "..........." << endl;
}
int main()
{
	class A a1;

	a1.set_data(10,20);

	class B b1;
	b1.set_data(30,40);

	b1.print_data(a1);
	b1.print_data1(a1);

	b1.print_data(b1);
	b1.print_data1(b1);
}
