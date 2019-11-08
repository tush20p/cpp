/*C++ program to define a class called Student with data members as roll, name and marks. Define the appropriate member functions, 1)setdata 2)display for reading and displaying the data and also define a member function called sort to sort 3 students records according to roll, name & marks.*/

#include "../inc/student.h"


using namespace std;

class student
{
	private :
		int roll;
		string name;
		float marks;

	public :
		void setdata();
		void print();
		friend void sort(student (&st)[3]);
};

void student :: setdata()
{
	cout << "Enter Roll : " ;
	cin >> roll;
	cout << "Enter Name : " ;
	cin >> name;
	cout << "Enter Mark : " ;
	cin >> marks;
	cout << endl;

}

void student :: print()
{
	cout << "\tName : " << name << endl;
	cout << "\tRoll : " << roll << endl;
	cout << "\tMark : " << marks << endl << endl;
}

int main()
{
	student st[3];
	int i;
	for(i=0;i<3;i++)
	{
		st[i].setdata();
	}
	cout << "Unshorted Data : " << endl;
	for(i=0;i<3;i++)
	{
		st[i].print();
	}

	sort(st);
	for(i=0;i<3;i++)
	{
		cout << "\nStudent-" << i << " Information : " << endl;
		st[i].print();
	}

}

void sort(student (&st)[3])
{
	int op;

	cout << "Sort Option : " << endl;

	cout << "\t1) Roll wise" << endl;
	cout << "\t2) Name wise" << endl;
	cout << "\t3) Marks wise" << endl;
	cout << endl;

	cout << "Enter Option : " ;
	cin >> op;

	int i,j;
	student temp;

	switch(op)
	{
		case 1 : for(i=0;i<2;i++)
			 {
				 for(j=0;j<2-i;j++)
				 {
					 if(st[j].roll > st[j+1].roll)
					 {
						 temp = st[j];
						 st[j] = st[j+1];
						 st[j+1] = temp;
					 }
				 }
			 }
			 break;

		case 2 : for(i=0;i<2;i++)
			 {
				 for(j=0;j<2-i;j++)
				 {
					 if(st[j].name > st[j+1].name)
					 {
						 temp = st[j];
						 st[j] = st[j+1];
						 st[j+1] = temp;
					 }

				 }
			 }
			 break;

		case 3 : for(i=0;i<2;i++)

			 {
				 for(j=0;j<2-i;j++)
				 {
					 if(st[j].marks > st[j+1].marks)
					 {
						 temp = st[j];
						 st[j] = st[j+1];
						 st[j+1] = temp;
					 }
				 }
			 }
			 break;

		default : cout << "Unknown Opetion ";

			  break;

	}

}
