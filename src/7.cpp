#include "../inc/template.h"
using namespace std;
template<class vvdn>
class A
{
	vvdn a[5];
	public:
	void set_data();
	void print_data();
};

	template<class vvdn>
void A<vvdn>::set_data()
{
	for(int i=0;i<5;i++)
		cin >> a[i];
}

	template<class vvdn>
void A<vvdn>::print_data()
{
	for(int i=0;i<5;i++)
		cout << a[i] << "  ";
	cout << endl;
}

main()
{
	A<int>obj1;
	A<char>obj2;

	cout << "Enter integer number" << endl;

	obj1.set_data();
	obj1.print_data();

	cout<<"-----------------------------"<< endl;

	cout << "Enter character" << endl;

	obj2.set_data();
	obj2.print_data();
}
