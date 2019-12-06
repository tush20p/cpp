#include "../inc/dma.h"

using namespace std;
main()
{
	int *p,ele,i,s=0,m=1;
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
        {
          if(p[i]%2)
           m=m*p[i];
          else
           s=s+p[i];
        }

        cout <<"Sum of even elements: "<< s << endl;
        cout <<"Product of odd elements: "<< m << endl;
}
