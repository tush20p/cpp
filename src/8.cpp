#include "../inc/template.h"
using namespace std;
template<class Type>
class A
{
	Type a[5];
	public:
	void set_data();
	void print_data();
};

	template<class Type>
void A<Type>::set_data()
{
	cout << "Enter data: " << endl;
	for(int i=0;i<5;i++)
		cin >> a[i];
}

	template<class Type>
void A<Type>::print_data()
{
	for(int i=0;i<5;i++)
		cout << a[i] << "  ";
	cout << endl;
}

main()
{
	A<int>obj1;
	A<char>obj2;

	cout << "enter integer" << endl;
	obj1.set_data();

	cout << "enter character" << endl;
	obj2.set_data();

	obj1.print_data();
	obj2.print_data();
}
