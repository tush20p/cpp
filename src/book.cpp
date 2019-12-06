#include "../inc/dma.h"

using namespace std;
class book
{
	public:
	char bname[20];
	char author[30];
	float price;
	book* alloc()
	{
		book *p= new book;
		return p;

	}
        friend void print_data(book**,int);
        friend book* set_data(int);
};

void print_data(book *p,int n)
{
cout << "n-" << n << endl;
        cout <<"Book Name"<<"     "<<"Author Name"<<"     "<<"Price"<< endl;
//        for(int i=0;i<n;i++)
          for(int j=0;j<n;j++)
         cout << p[j].bname <<"     "<< p[j].author <<"     "<< p[j].price << endl;
}

book* set_data(int n)
{
	book a,*ptr[n];
cout << "n-" << n << endl;
	for(int i=0;i<n;i++)
	{
		ptr[i]=a.alloc();
		cout <<"Enter Book name,Author name & price: ";
		cin >> ptr[i]->bname >> ptr[i]->author >> ptr[i]->price;
	}
//while(*ptr)
  return *ptr;
}

main()
{
   
        int n;
	cout <<"How many data u wants to enter...???"<< endl;
	cout <<"Enter==> ";
	cin >> n;
        book *ptr;
 	ptr= set_data(n);    
        print_data(ptr,n);


}
