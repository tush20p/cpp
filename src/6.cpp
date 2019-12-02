#include "../inc/template.h"
using namespace std;
template<class vvdn>
class A
{
	vvdn a[5];
	public:
	void set_data()
	{
		cout << endl <<"Enter data: " << endl;
		for(int i=0;i<5;i++)
			cin >> a[i];
	}
	void print_data()
	{
		cout <<"----------------------" << endl;
		for(int i=0;i<5;i++)
			cout << a[i] << "  ";
		cout<< endl;
	}
};

main()
{
	A<int> obj1;
	A<char> obj2;

	obj1.set_data();
	obj1.print_data();

	obj2.set_data();
	obj2.print_data();
}
