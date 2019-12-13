#include "../inc/mt.h"
using namespace std;

pthread_t tid[2]; 
int counter; 
pthread_mutex_t lock; 

void* trythis(void* arg) 
{ 
	pthread_mutex_lock(&lock); 

	unsigned long i = 0; 
	counter += 1; 
	cout <<"\n Job "<< counter <<" has started\n" << endl; 

	for (i = 0; i < counter; i++) 
		cout <<"\n Job "<< counter <<" has finished\n" << endl; 

	pthread_mutex_unlock(&lock); 

	return NULL; 
} 

int main(void) 
{ 
	int i = 0; 
	int error; 

	if (pthread_mutex_init(&lock, NULL) != 0) 
	{ 
		cout << "\n mutex init has failed\n" << endl; 
		return 1; 
	} 

	while (i < 2) 
	{ 
		error = pthread_create(&(tid[i]), NULL, &trythis, NULL); 
		if (error != 0) 
			cout <<"\nThread can't be created :[%s]" << strerror(error) <<endl; 
		i++; 
	} 

	pthread_join(tid[0], NULL); 
	pthread_join(tid[1], NULL); 
	pthread_mutex_destroy(&lock); 

	return 0; 
} 

