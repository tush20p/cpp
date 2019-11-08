#include "../inc/class3.h"
using namespace std;

class vvdn
{
	int x;
	int y;
	void set_data();

	public:
	void print_data();


};
	void vvdn::set_data()
	{
		cout << "enter the no" << endl;
		cin >> x >> y;
	}

	void vvdn::print_data()
	{
	set_data();
		cout << "x - " << x << endl;
		cout << "y - " << y << endl;
	}

int main()
{
	class vvdn obj;

	obj.print_data();
}
