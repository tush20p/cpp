#include "../inc/dynamic.h"
using namespace std;

class A
{
	int x;
	int y;

	public:

	A()
	{
		cout << "default constructor" << endl;
		x=10,y=20;
	}

	A(int a,int b):x(a),y(b)
	{
		cout << "parameterized constructor" << endl;
	}


	void print_data()
	{
		cout << "x-" << x << endl;
		cout << "y-" << y << endl;
	}
	
	~A()
	{
	cout << "destructor" << endl;
	}

};

int main()
{
	A *ptr,*ptr1;

	ptr=new A;
	ptr1=new A(100,200);

	ptr->print_data();
	ptr1->print_data();
	delete ptr;
}
