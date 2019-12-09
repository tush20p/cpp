#include "../inc/namespace.h"
//using namespace std;
namespace first
{
	int x=10;
	void test()
	{
//		 cout <<"test func-1"<<  endl;
		std:: cout <<"test func-1"<< std:: endl;

	}
}
namespace second
{
	int x=100;
	void test()
	{
	//	 cout <<"test func-2"<< endl;
		std:: cout <<"test func-2"<<std:: endl;
	}
}
using namespace first;
//using namespace second;
main()
{       
//       	 cout << x <<  endl;
       	std:: cout << x << std:: endl;
	test();
}
