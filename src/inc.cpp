#include "../inc/increment.h"
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}

	void print_data()
	{
		cout << "x: " << x << "   " << "y: " << y << endl;
	}
	A operator ++ ()
	{
		A k;
		k.x = ++x;
		k.y = ++y;
		return k;
	}

	A operator ++ (int)
	{
		A k;
		k.x = x++;
		k.y = y++;
		return k;
	}
};

main()	
{
	A a(100,200),b,c;
	c= a++;
	c.print_data();
	a.print_data();
}


