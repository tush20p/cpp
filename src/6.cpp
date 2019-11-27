#include "../inc/cpp.h"
using namespace std;
main(int argc,char **argv)
{
	int x;
	ifstream fin;
	if(argc!=2)
	{
		cout<<"Warning: ./a.out fname..."<< endl;
		return 0;
	}

	if(fin.fail())
	{
		cout<<"File Not present..."<< endl;
		return 0;
	}
	fin.open(argv[1],ios::in);
	fin.seekg(0,ios::end);
	x=fin.tellg();
	cout<<"size: "<< x << endl;
}
