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
main()
{
        using namespace second;
        using first:: x;       
       	std:: cout << x << std:: endl;
	test();
}
