#include "../inc/dma.h"

using namespace std;
int **alloc(int,int);
void data(int **,int,int);
void print(int **,int,int);
void del(int **,int);
void mul(int**,int**,int**,int,int,int);
main()
{
	int **p1,**p2,**p3,i,j,r1,c1,r2,c2;

    	cout <<"Enter Row1 & Column1: ";
	cin >> r1 >> c1;

	cout <<"Enter Row2 & Column2: ";
	cin >> r2 >> c2;

        p1=alloc(r1,c1);
        p2=alloc(r2,c2);
        p3=alloc(r1,c2);

        data(p1,r1,c1);
        data(p2,r2,c2);

        mul(p1,p2,p3,r1,c2,c1);

        cout <<"------First Matrix------"<< endl;
        print(p1,r1,c1);

        cout <<"------Second Matrix------"<< endl;
        print(p2,r2,c2);

        cout <<"------Output Matrix------"<< endl;

        print(p3,r1,c2);

        del(p1,r1);
        del(p2,r2);
        del(p3,r1);
}
int **alloc(int r,int c)
{
       int **p=new int*[r];
	for(int i=0;i<r;i++)
		p[i]=new int[c];
   return p;
}

void data(int **p,int r,int c)
{
	cout <<"Enter data:";
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin >> p[i][j];
}

void mul(int **p1,int **p2,int **p3,int r,int c,int m)
{
	int t,k,l,n;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
		{
			t=0;
                      
			for(l=j,k=i,n=0;n<m;n++)
				t=t+p1[k][n]*p2[n][l];
			p3[i][j]=t;
		}
       	   
}

void print(int **p,int r,int c)
{
	for(int i=0;i<r;i++)
	{
                cout <<"|";
		for(int j=0;j<c;j++)
			cout <<p[i][j] <<" ";
		cout <<"|" <<endl;
	}
cout << endl;
}
void del(int **p,int r)
{
	for(int i=0;i<r;i++)
		delete []p[i];
	delete p;
}

