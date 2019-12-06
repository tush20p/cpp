#include "../inc/dma.h"

using namespace std;
main()
{
	int *p,ele,i,t=0;
	cout <<"Enter No of elements: ";
	cin >> ele;
	p=new int[ele];
	cout <<"Enter elements: ";
	for(i=0;i<ele;i++)
		cin >> p[i];
	cout <<"---------Array---------"<< endl;
	cout <<"{";
	for(i=0;i<ele;i++)
		cout <<p[i]<<" ";
	cout <<"}"<< endl;
        for(i=0;i<ele;i++)
         t=t+p[i];
        cout <<"Sum of elements: "<< t << endl;
}
