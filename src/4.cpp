#include "../inc/template.h"
using namespace std;
	template<class vvdn>
void my_sort(vvdn *p)
{
	vvdn t;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}

int main()
{
	int a[5];
	char ch[5];
	cout << "Enter 5 integers: " << endl;
	for(int i=0;i<5;i++)
		cin >> a[i];

	cout << "Enter 5 characters: " << endl;
	for(int i=0;i<5;i++)
		cin >> ch[i];

	my_sort(a);
	my_sort(ch);

	cout << ".................." << endl;
	for(int i=0;i<5;i++)
		cout << a[i] << " ";
	cout<< endl;
	cout << ".................." << endl;

	for(int i=0;i<5;i++)
		cout << ch[i] << " ";
	cout<< endl;
}
