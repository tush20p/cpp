#include "../inc/complex1.h"

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

	complex addition(complex &t)
	{
		complex result;
		result.real=real+t.real;
		result.img=img+t.img;
		return result;
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
	obj3=obj1.addition(obj2);

	obj1.print_data();
	obj2.print_data();
	obj3.print_data();
}
