#include "../inc/namespace.h"
using namespace std;
namespace first
{
	int x=10;
	void test()
	{
		 cout <<"test func-1"<< endl;
	}
}
namespace second
{
	int x=100;
	void test()
	{
		 cout <<"test func-2"<< endl;
	}
}
        using namespace first;
main()
{
//        using first::x;       
        cout << x << endl;
	second::test();
}
