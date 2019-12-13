#include "../inc/mt.h"

using namespace std;
#define num_thread 3

struct employee
{

	int ID;
	char name[50];
	int experience;
};

void *office(void *details)
{
	struct employee *empl;
	empl = (struct employee*)details;

	cout << "----employee details----" << endl;
	cout << "employee ID =" << empl->ID << endl;
	cout << "employee Name =" << empl->name << endl;
	cout << "employee experience =" << empl->experience << endl;	

	pthread_exit(NULL);
}

int main()
{

	pthread_t threads[num_thread];
	struct employee empl[num_thread];

	int i,check;

	for(i = 0;i<num_thread;i++)
	{
		cout << "employee ID = ";
		cin >> empl[i].ID;

		cout << "\nemployee Name = ";
		cin >> empl[i].name;

		cout << "\nemployee experience = ";
		cin >> empl[i].experience;

		check=pthread_create(&threads[i],NULL,office,(void*)&empl[i]);

		if(check)
		{
			cout << "Error:unable to create thread," << check << endl;
			exit(-1);
		}
		sleep(1);
	}	
	pthread_exit(NULL);
}
