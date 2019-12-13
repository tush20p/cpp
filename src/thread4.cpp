#include "../inc/mt.h"

using namespace std;

pthread_t readID,writeID[5];
pthread_mutex_t lock;
ifstream fin;
ofstream fout;
static int j = 0;
string str;
void* threadread(void *arg)
{

	pthread_mutex_lock(&lock);
	fin.open("memory",ios::in);
	if(fin.fail())
	{
		cout<<"file not present"<<endl;
		return 0;
	}
	while(getline(fin,str))
	{
		cout<<str;
	}
	fin.close();
	pthread_mutex_lock(&lock);
}
void* threadwrite(void *arg)
{

	pthread_mutex_lock(&lock);

	fout.open("memory",ios::out|ios::app);
	fout << *(char*)arg;
	cout << *(char*)arg;
	fout.close();

	pthread_mutex_unlock(&lock);
}
int main()
{

	int check;
	string c;

	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		cout<<"\nmutex init has failed"<<endl;
		return 1;
	}
	for(int i = 0;i<5;i++)
	{
		cout << " enter string..." << endl;
		cin >> c;
		check = pthread_create(&(writeID[i]),NULL,&threadwrite,&c);
		if(check != 0)
			cout<<"\nthread cann't be created"<<endl;
		sleep(1);
	}
	check=pthread_create(&readID,NULL,&threadread,NULL);
	if(check!=0)
		cout<<"thread can't be created"<<endl;
	pthread_mutex_destroy(&lock);
}


