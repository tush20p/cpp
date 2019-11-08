/*Write C++ program to calculate simple interest. Define the class called interest and hide the data elements of the class using private keyboard. Define the setdata member function to read the data through keyboard and define the print member function outside the class.
Formulae : interest = (P * N * R) / 100;
Total_amount = interest + P;
	here, P -> Principle amount
N -> Period (No.of years)
	R -> rate of interest*/

#include "../inc/simpleinterest.h"
using namespace std;

class intrest
{

	int p,n,i;
	float r;
	float t;

	public:

	void setdata()
	{
		cout << "principle amount=" << endl;
		cin >> p;
		cout << "period of years" << endl;
		cin >> n;
		cout << "rate of intrest" << endl;
		cin >> r;

		i=(p*n*r)/100;
		t=i+p;

	}

	void print();
};

void intrest::print()
{
	cout << "print function" << endl;
	cout << "intrest = " << i << endl;
	cout <<"total = " << t << endl;
}

int main()
{
	intrest obj1;
	obj1.setdata();
	obj1.print();
}
