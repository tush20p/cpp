#include "../inc/mt.h"
using namespace std;

void *threadwrite(void *arg)
{
//	ofstream fout;
	fstream fout;
	cout << "In threadwrite" << "\n";
	fout.open("memory", ios::out|ios::app);		//,ios::out|ios::app);
	if(!fout) 
	{
		cout<<"File creation failed";
	}
	else
	{
		cout<<"New file created";
		fout<<"vyshnav";
		fout<<*(char*)arg;
		fout.close();
	}
}

int main()
{
	pthread_t writeID;

	int check;
	char a = 'a',b = 'b',c = 'c';

	check = pthread_create(&writeID, NULL, &threadwrite, (void *)&a);
	if(check != 0){
		cout<<"thread cann't be created"<<endl;
		return -1;
	}
	else {
		cout << "Thread is created\n";
	}
	pthread_exit(NULL);
}
