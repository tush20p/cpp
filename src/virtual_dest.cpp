#include "../inc/poly.h"

using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor A"<< endl;
		}
		virtual  ~A()
		{
			cout<<"Destructor A"<< endl;
		}
};


class B:public A
{
	public:
		B()
		{
			cout<<"constructor B"<< endl;
		}
		~B()
		{
			cout<<"Destructor B"<< endl;
		}
};

class C:public B
{
	char *s;
	public:
	C()
	{
		cout<<"constructor C"<< endl;
		s=new char[100];
	}
	~C()
	{
		cout<<"Destructor C"<< endl;
		delete s;
	}
};

main()
{
	A *ptr;
	ptr=new C;
	cout<<"-------------------------------------------------"<< endl;
	delete ptr;
}
