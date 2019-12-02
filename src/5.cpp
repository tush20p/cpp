#include "../inc/template.h"
using namespace std;
	template<class vvdn,class vvdn1>
double biggest(vvdn a,vvdn1 n)
{
	if(a>n)
		return a;
	else if(a<n)
		return n;
	else
		return 0;
}

main()
{
	int a,n;
	char ch1,ch2;

	cout<<"Enter two integers: " << endl;
	cin >> a >> n;

	cout<<"Enter two characters: " << endl;
	cin >> ch1 >> ch2;

	cout << "Biggest integer  : " << biggest(a,n) << endl;
	cout << "Biggest character: " << (unsigned char) biggest(ch1,ch2) << endl;
}
