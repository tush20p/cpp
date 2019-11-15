/*employee record using multiple inheritance*/
#include "../inc/multiple1.h"
using namespace std;

class personal
{
	protected:
		char name[50];
		int id;
		char gender;
	public:
		void getdata()
		{
			cout << "enter employee personal details...." << endl;
			cout << "name : ";
			cin.getline(name,50);
			cout << "id : ";
			cin >> id;
			cout << "gender : ";
			cin >> gender;
			cout << endl;
		}
};
class company
{
	protected:
		char depart[50];
		char project[30];
		int time;
		string name1;
	public:
		void getdatacompany()
		{
			cout << "enter department details...." << endl;
			cout << "name : ";
			cin >> name1;
			cin.ignore(1);
			cin.getline(depart,50);
			cout << "project name : ";
			cin.getline(project,30);
			cout << "total project duration : ";
			cin >> time;
		}
};
class derived:private personal,private company
{
	public:
		void getbase()
		{
			getdata();
			getdatacompany();
		}
		void printdata()     //accessing protected data
		{
			cout << "\nemployee personal details...." << endl;
			cout << "Name : " << name << endl;
			cout << "id : " << id << endl;
			cout << "gender : " << gender << endl;
			cout << "\nemployeee compamy details...." << endl;
			cout << "department : " << depart << endl;;
			cout << "project : " << project << endl;
			cout << "duration : " << time << endl;
		}
};

int main()
{
	derived d;
	d.getbase();
	d.printdata();
}
