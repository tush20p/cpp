#include "../inc/mt.h"

using namespace std;

pthread_t readID,writeID[3];
pthread_mutex_t lock;
//ifstream fin;
fstream fout;
/*void* threadread(void *arg){

  pthread_mutex_lock(&lock);
  fin.open("memory",ios::in);
  if(fin.fail()){
  cout<<"file not present"<<endl;
  return 0;
  }
  while(getline(fin,str)){
  cout<<str;
  }
  fin.close();
  pthread_mutex_lock(&lock);
  }*/
void* threadwrite(void *arg){

	pthread_mutex_lock(&lock);

	fout.open("memory", ios::out|ios::app);
	fout<<*(char*)arg;
	cout<<*(char*)arg;
	fout.close();

	pthread_mutex_unlock(&lock);
}
void* threadwrite1(void *arg){

	pthread_mutex_lock(&lock);

	fout.open("memory",ios::out|ios::app);
	fout<<*(char*)arg;
	cout<<*(char*)arg;
	fout.close();

	pthread_mutex_unlock(&lock);
}
void* threadwrite2(void *arg){

	pthread_mutex_lock(&lock);

	fout.open("memory",ios::out|ios::app);
	fout<<*(char*)arg;
	cout<<*(char*)arg;
	fout.close();

	pthread_mutex_unlock(&lock);
}
int main(){

	int check;
	char a = 'a',b = 'b',c = 'c';
	if(pthread_mutex_init(&lock,NULL)!=0){
		cout<<"\nmutex init has failed"<<endl;
		return 1;
	}

	check = pthread_create(&writeID[0], NULL, &threadwrite,&a);
	if(check != 0){
		cout<<"\nthread cann't be created"<<endl;
		return -1;
	}
	else {
		cout << "Thread is created\n";
	}
	check = pthread_create(&(writeID[1]),NULL,&threadwrite1,&b);
	if(check != 0)
		cout<<"\nthread cann't be created"<<endl;
	check = pthread_create(&(writeID[2]),NULL,&threadwrite2,&c);
	if(check != 0)
		cout<<"\nthread cann't be created"<<endl;

	pthread_exit(NULL);
	//	check=pthread_create(&readID,NULL,&threadread,NULL);
	//	if(check!=0)
	//		cout<<"thread can't be created"<<endl;
	//sleep(5);
	pthread_mutex_destroy(&lock);
	//	fout.close();
}


