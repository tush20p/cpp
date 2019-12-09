#include "../inc/namespace.h"
using namespace std;
int sum(int,int);
double sum(double,double);
main()
{
	cout <<"func-1:" << sum(10,20) <<endl;
	cout <<"func-2:" << sum(10.34,20.6) <<endl;
}


int sum(int x,int y)
{
	return x+y;
}


double sum(double x,double y)
{
	return x+y;
}
