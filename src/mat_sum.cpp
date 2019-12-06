#include "../inc/dma.h"

using namespace std;
int **alloc(int,int);
void data(int **,int,int);
void print(int **,int,int);
void del(int **,int);
void sum(int**,int**,int**,int,int);
main()
{
	int **p1,**p2,**p3,i,j,r,c;

	cout <<"Enter Row & Column:"<< endl;
	cin >> r >> c;

        p1=alloc(r,c);
        p2=alloc(r,c);
        p3=alloc(r,c);

        data(p1,r,c);
        data(p2,r,c);

        sum(p1,p2,p3,r,c);

        print(p1,r,c);

        cout <<" __|__"<< endl;
        cout <<"   |"<< endl;
        print(p2,r,c);

        cout <<"  | |"<< endl;
        cout <<"  | |"<< endl;
        print(p3,r,c);

        del(p1,r);
        del(p2,r);
        del(p3,r);
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

void sum(int **p1,int **p2,int **p3,int r,int c)
{
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			p3[i][j]=p1[i][j]+p2[i][j];
}

void print(int **p,int r,int c)
{
   cout << endl << endl;
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
 
