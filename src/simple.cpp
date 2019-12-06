#include "../inc/dma.h"

using namespace std;

class Box 
{
	public:
		Box()
		{ 
			cout << "Constructor called!" << endl; 
		}
		~Box() 
		{ 
			cout << "Destructor  called!" << endl; 
		}
};
int main()
{

	Box* Array = new Box[4];
	delete [] Array; // Delete array

	return 0;
}
