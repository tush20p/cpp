#include "../inc/assignment.h"
using namespace std;

class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	A operator = (A temp) 
	{
		A result;
		result.x = temp.x;   
		result.y = temp.y; 
		return result;  
		cout<< endl << "---Operator overloaded-----" << endl;
	}

	void print_data()
	{
		A result;
		cout << "x: " << result.x << "  " << "y: " << result.y << endl;
	}
};

main()
{
	A a(10,20),b;
	b=a;
	a.print_data();
	b.print_data();
}
