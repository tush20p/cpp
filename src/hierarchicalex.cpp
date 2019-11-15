/*C++ program using hierarchical inheritance to get square and cube of a number.*/

#include "../inc/hierarchicalex.h"
using namespace std;

class Number
{
	int num;
	public:
	void getNumber(void)
	{
		cout << "Enter an integer number: ";
		cin  >> num;
	}
	int returnNumber(void)
	{ 
		return num;
	}
};

class Square:public Number         
{
	public:
		int getSquare(void)
		{
			int num,sqr;
			num=returnNumber(); 
			sqr=num*num;
			return sqr;
		}
		void print_data()
		{
			int sqr;
			cout << "squar -" << sqr << endl;
		}
};

class Cube:public Number
{

	public:
		int getCube(void)
		{
			int num,cube;
			num=returnNumber();
			cube=num*num*num;
			return cube;
		}
		void print_data()
		{
			int cube;
			cout << "cube -" << cube << endl;
		}
};
int main()
{
	Square objS;
	Cube objC;
	int sqr,cube;

	objS.getNumber();
	sqr =objS.getSquare();
	objS.print_data();
	cout << "Square of "<< objS.returnNumber() << " is: " << sqr  << endl;

	objC.getNumber();
	cube=objC.getCube();
	objC.print_data();
	cout << "Cube   of "<< objC.returnNumber() << " is: " << cube << endl;
}
