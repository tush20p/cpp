#include "../inc/template.h"
using namespace std;
template<class t1,class t2>
class A
{
	t1 x;
	t2 y;
	public:
	void set_data();
	void print_data();
};

	template<class t1,class t2>
void A<t1,t2>::set_data()
{
	cout<<"Enter data: " << endl;
	cin >> x >> y;
}

	template<class t1,class t2>
void A<t1,t2>::print_data()
{
	cout << "Entered data: " << endl;
	cout << "x: " << x << "   " << "y: " << y << endl;
}

main()
{
	A<int,char>a;
	A<char,float>b;
	A<float,int>c;

cout << "enter integer and char " << endl;

	a.set_data();
	a.print_data();

	cout<<"-----------------------------------"<< endl;

cout << "enter char and float " << endl;

	b.set_data();
	b.print_data();

	cout<<"-----------------------------------"<< endl;

cout << "enter float and integer " << endl;

	c.set_data();
	c.print_data();

	cout<<"-----------------------------------"<< endl;
}
