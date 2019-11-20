#include "../inc/const.h"
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b): x(a),y(b){}

	A operator + (int a)
	{
		A temp;
		temp.x = x + a;
		temp.y = y + a;
		return temp;
	}
	void print_data()
	{
		cout<< "x: " << x << "   " << "y: " << y << endl;
	}
};

main()
{
	A obj1(10,20),obj2;
	obj2 = obj1 + 10;
	obj1.print_data();
	obj2.print_data();
}
