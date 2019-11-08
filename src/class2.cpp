#include "../inc/class2.h"
using namespace std;

class vvdn
{
	int x;
	int y;

	public:
	void set_data();
	void print_data();


};
	void vvdn::set_data()
	{
		cout << "enter the no" << endl;
		cin >> x >> y;
	}

	void vvdn::print_data()
	{
		cout << "x - " << x << endl;
		cout << "y - " << y << endl;
	}

int main()
{
	class vvdn obj;

	obj.set_data();
	obj.print_data();
}
