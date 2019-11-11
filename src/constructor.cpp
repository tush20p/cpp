#include "../inc/constructor.h"
using namespace std;
class A
{
	int x,y;
	public:
	A()
	{
		cout <<"Constructor..."<< endl;
		x=100,y=200;
	}
	A(int a,int b)
	{
                cout <<"Parameterized..."<< endl;
                x=a,y=b;
	}
       void print_data()
        {
                cout<<"x: " << x <<"  "<<"y: "<< y << endl;
        }
};

main()
{
A obj1,obj2(10,20),obj3;
obj1.print_data();
obj2.print_data();
obj3.print_data();
}
