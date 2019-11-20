#include "../inc/exp1friend.h"
using namespace std;
class A 
{
	int x,y;
	public:
	A(){}

	A(int a,int b):x(a),y(b){}

	friend A operator + (const A& , const A&);
	friend A operator - (const A& , const A&);
	friend A operator * (const A& , const A&);
	friend A operator / (const A& , const A&);

	void print_data()
	{
		cout<<"x: "<< x <<"   "<<"y: "<< y << endl;
	}
};


A operator + (const A &t1, const A &t2)
{
	A res;
	res.x = t1.x + t2.x;
	res.y = t1.y + t2.y;
	return res;
}

A operator - (const A &t1, const A &t2)
{
	A res;
	res.x = t1.x - t2.x;
	res.y = t1.y - t2.y;
	return res;
}

A operator * (const A &t1, const A &t2)
{
	A res;
	res.x = t1.x * t2.x;
	res.y = t1.y * t2.y;
	return res;
}

A operator / (const A &t1, const A &t2)
{
	A res;
	res.x = t1.x / t2.x;
	res.y = t1.y / t2.y;
	return res;
}

main()
{
	A obj1(1,1),obj2(2,2),obj3(3,3),obj4(4,4),obj5(2,2),obj6(2,4),obj7;
	obj7 = obj6 * obj1 + obj2 * obj3 - obj4/obj5;
	obj6.print_data();
}







