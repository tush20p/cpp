#include "../inc/template.h"
using namespace std;
	template<class T>
T area(T r)
{
	cout << "type: " << typeid(r).name() << endl;
	return 3.14*r*r;
}

	template<class t1,class t2>
double area(t1 l,t2 b)
{
	cout << "type: " << typeid(t1).name() << endl;
	return l*b;
}

main()
{
	cout << area(10.8f) << endl;
	cout <<"-------------------------------" << endl;
	cout << area(1) << endl;
	cout <<"-------------------------------" << endl;
	cout << area('a','b') << endl;
	cout <<"-------------------------------" << endl;
	cout << area(10.5,3) << endl;
}
