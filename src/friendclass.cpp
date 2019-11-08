#include "../inc/friendclass.h"
using namespace std;

class wife;
class husband
{
	char name[20];
	float sal;

	public:

	void set_data()
	{
		cout << "enter husband name and sallary" << endl;
		cin >> name;
		cin >> sal;
		if(sal<0)
		cout << "wrong sallary" << endl;
	}

	void print_data()
	{
		cout << "husband details" << endl;

		cout << "name -" << name << endl;
		cout << "sallary -" << sal << endl;
		cout << "......................" << endl;
	}

	friend void income_tax(husband &,wife &);

};
class wife
{
	char name[20];
	float sal;

	public:

	void set_data()
	{
		cout << "enter wife name and sallary" << endl;
		cin >> name;
		cin >> sal;
		if(sal<0)
		cout << "wrong sallary" << endl;
		cout << endl;
	}

	void print_data()
	{
		cout << "wife details" << endl;

		cout << "name - " << name << endl;
		cout << "sallary - " << sal << endl;
		cout << "......................" << endl;
	}

	friend void income_tax(husband &,wife &);
};

void income_tax(husband &h,wife &w)
{
	float total;

	total=h.sal+w.sal;

	if(total<50000)
	{
		cout << "no need to pay tax" << endl;
		cout << "......................" << endl;
	}	
	else
	{
		cout << "5 per tax need to pay" << endl;
		cout << "......................" << endl;
	}
}


int main()
{
        husband h1;
	 wife w1;

	h1.set_data();
	w1.set_data();

	income_tax(h1,w1);

	h1.print_data();
	w1.print_data();
}
