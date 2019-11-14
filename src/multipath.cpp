#include "../inc/multipath.h"
using namespace std;
class A
{
	int x;
	public:
	A()
	{
		cout<<"def constructor-A..."<< endl;
	}
	A(int a)
	{
		cout<<"constructor-A"<< endl;
		x=a;
	}
	void print_data()
	{
		cout<<"x: "<< x << endl;
	}
	~A()
	{
		cout<<"Destructor-A..."<< endl;
	}
};

class B:virtual public A
{
	int y;
	public:
	B(){}
	B(int a,int b):A(a)
	{
		cout<<"constructor-B"<< endl;
		y=b;
	}
	void print_data()
	{
		A::print_data();
		cout<<"y: "<< y << endl;
	}
	~B()
	{
		cout<<"Destructor-B..."<< endl;
	}
};

class C:virtual public A
{
	int z;
	public:
	C(){}
	C(int a,int b):A(a)
	{
		cout<<"constructor-C"<< endl;
		z=b;
	}

	void print_data()
	{
		A::print_data();
		cout<<"z: "<< z << endl;
	}
	~C()
	{
		cout<<"Destructor-C..."<< endl;
	}
};

class D:public B,public C
{
	int p;
	public:
	D(){}
	D(int a,int b,int c):B(a,b),C(a,b)
	{
		p=c;
		cout<<"constructor-D..."<< endl;
	}


	void print_data()
	{
		B::print_data();
		C::print_data();
		cout<<"p: "<< p << endl;
	}
	~D()
	{
		cout<<"Destructor-D..."<< endl;
	}
};

class boss:public D
{
	int g;
	public:
	boss(){}
	boss(int a,int b,int c,int d):D(a,b,c)
	{
		g=d;
		cout <<"constructor-boss"<< endl;
	}


	void print_data()
	{
		D::print_data();
		cout<<"g: "<< g << endl;
	}
	~boss()
	{
		cout <<"Destructor-boss"<< endl;
	}
};

class boss2:public boss
{
	int t;
	public:
	boss2(){}
	boss2(int a,int b,int c,int d,int e):A(a),boss(a,b,c,d)
	{
		t=e;
		cout <<"constructor-boss2"<< endl;
	}


	void print_data()
	{
		boss::print_data();
		cout<<"t: "<< t << endl;
	}
	~boss2()
	{
		cout <<"Destructor-boss2"<< endl;
	}
};
main()
{
	boss2 a(10,20,30,40,50);
	a.print_data();
}

