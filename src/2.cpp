#include "../inc/template.h"
using namespace std;
template<class vvdn1,class vvdn2>

double sum(vvdn1 x,vvdn2 y)
{
	return x+y;
}

main()
{
	cout << "10 + 20.3 = " << sum(10,20.3) << endl;
	cout << "00 + 01   = " << sum('0','1') << endl;
	cout << "10.3 + a  = " << sum(10.3f,'a') << endl;
}
