#include "../inc/poly.h"

using namespace std;
class A
{
	int x;
	public:
	 void set()
	{
		cout<<"test in-A"<< endl;
	}
};
class B:public A
{
	int x;
	public:
	void set()
	{
		cout<<"test in-B"<< endl;
	}
};

main()
{
	A obj;
	obj.set();
	cout<<"size of A: "<< sizeof(A) << endl; 
	cout<<"size of B: "<< sizeof(B) << endl; 
}

