#include "../inc/poly.h"
using namespace std;
class A
{
	public:
		virtual	 void set()
		{
			cout<<"test in-A"<< endl;
		}
};
class B:public A
{
	public:
		virtual void set()
		{
			cout<<"test in-B"<< endl;
		}
};

main()
{
	A *ptr;
	B obj;
	ptr= &obj;
	ptr->set();
}

