#include "../inc/dma.h"
using namespace std;
int main()
{
	int **p,i,j,r,c,row,col;
row:
	cout << "Enter Rows:" << endl;
	cin >> r;
	if(r==0)
	{
		cout << "wrong input" << endl;
		goto row;
	}
col:
	cout << "Enter Columns:" << endl;
	cin >> c;
	if(c==0)
	{
		cout << "wrong input" << endl;
		goto col;
	}
	p=new int*[r];

	for(i=0;i<r;i++)
		p[i]=new int[c];

	cout << "Enter data:";

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin >> p[i][j];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout << p[i][j] << " ";
		cout << endl;
	}


	for(i=0;i<r;i++)
		delete []p[i];

	delete p;
}
