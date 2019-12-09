#include "../inc/namespace.h"
using namespace std;
namespace first
{
	namespace second
	{
		namespace third
		{
			int x=100;
		} 
	}
}
main()
{
	cout << first:: second:: third::x <<endl;
}
/*
   main()
   {
   using namespace first;
   using namespace second;
   using namespace third;
   cout << x <<endl;
   }
   main()
   {
   using namespace first::second::third;
   cout << x << endl;
   }
   main()
   {
   namespace final=first::second::third;
   cout << final::x << endl;
   }*/

