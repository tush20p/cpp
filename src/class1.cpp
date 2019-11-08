#include "../inc/class.h"
using namespace std;

class vvdn
{
	int x;
	int y;

	public:

	void set_data()
	{
		cout << "enter the no" << endl;
		cin >> x >> y;
	}

	void print_data()
	{
		cout << "x - " << x << endl;
		cout << "y - " << y << endl;
	}

};

int main()
{
	class vvdn obj;

	obj.set_data();
	obj.print_data();
}
