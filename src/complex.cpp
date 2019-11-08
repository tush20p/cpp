#include "../inc/complex.h"
using namespace std;

class complex 
{
	int real;
	int img;

	public:

	void set_data(int a,int b);

	void print_data()
	{
		cout << "complex - " << real << " + " << img << "j" << endl;
	}

	void addition(complex temp1,complex temp2)
	{
		real=temp1.real+temp2.real;
		img=temp1.img+temp2.img;
	}
};
	void complex::set_data(int a,int b)
	{
		real=a,img=b;
	}

int main()
{
	class complex obj1,obj2,obj3;

	obj1.set_data(10,20);
	obj2.set_data(100,200);
	obj3.addition(obj1,obj2);

	obj1.print_data();
	obj2.print_data();
	obj3.print_data();
}
