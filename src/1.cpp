#include "../inc/template.h"
using namespace std;
template< typename vvdn>

void swap_data(vvdn &x,vvdn &y)
{
	vvdn t;
	t=x;
	x=y;
	y=t;
}

main()
{
	int x=10,y=20;
	char ch1='A',ch2='K';
	float f1=10.5,f2=20.5;

	cout << "Input" << endl;

	cout << "x  : " << x << "  " << "y    : " << y << endl;
	cout << "ch1- " << ch1 << "  " << "ch2 - " << ch2 << endl;
	cout << "f1 = " << f1 << "  " << "f2  = " << f2 << endl;

	cout<<"-------------------------------------------------------"<< endl;

	swap_data(x,y);
	swap_data(ch1,ch2);
	swap_data(f1,f2);

	cout << "output" << endl;

	cout << "x  : " << x << "  " << "y    : " << y << endl;
	cout << "ch1- " << ch1 << "  " << "ch2 - " << ch2 << endl;
	cout << "f1 = " << f1 << "  " << "f2  = " << f2 << endl;
}

