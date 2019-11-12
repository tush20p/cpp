#include "../inc/static2.h"
using namespace std;

class A
{
	public:

		static int count;

		A()
		{
			cout << "constructor" << endl;
			count++; 
		}

		~A()
		{
			cout << "destructor" << endl;
			count--; 
		}
};

int A::count=0;

int main()
{
	A obj,obj1,obj2;
	{	
		A obj4;
		cout << "count " << A::count << endl;
	}	
	cout << "count " << A::count << endl;
}

