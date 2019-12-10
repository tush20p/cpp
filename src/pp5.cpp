#include "../inc/pp.h"

using namespace std;
#define gfg 75 

#if gfg > 200 
#undef gfg 
#define gfg 200 
#elif gfg < 50 
#undef gfg 
#define gfg 50 
#else 
#undef gfg 
#define gfg 100 
#endif 

int main() 
{ 
	cout << gfg << endl; // gfg = 50 
}	 

