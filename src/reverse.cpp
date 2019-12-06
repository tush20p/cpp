#include "../inc/dma.h"

using namespace std;
main()
{
	int *p,ele,i,j,t;
	cout <<"Enter No of elements: ";
	cin >> ele;
	p=new int[ele];
	cout <<"Enter elements: ";


	for(i=0;i<ele;i++)
		cin >> p[i];
	cout <<"---------Before Reversing---------"<< endl;


	for(i=0;i<ele;i++)
		cout <<p[i]<<" ";
	cout << endl;


	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}

	cout <<"---------After Reversing---------"<< endl;
	for(i=0;i<ele;i++)
		cout <<p[i]<<" ";
	cout << endl;
}
