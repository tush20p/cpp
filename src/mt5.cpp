#include "../inc/mt.h"
using namespace std;

pthread_t tid[2]; 
int counter; 

void* trythis(void* arg) 
{ 
	unsigned long i = 0; 
	counter += 1; 
	cout << "\njob " << counter  <<" has started \n" << endl;// << counter << endl; 

	for (i = 0; i < counter; i++) 		 
	cout << "\n job " << counter <<" has finished \n" << endl; //<< counter << endl; 

	return NULL; 
} 

int main(void) 
{ 
	int i = 0; 
	int error; 

	while (i < 2)
	{ 
		error = pthread_create(&(tid[i]), NULL, &trythis, NULL); 
		if (error != 0) 
			cout << "\nThread can't be created : [%s]" << strerror(error) << endl; 
		i++; 
	} 

	pthread_join(tid[0], NULL); 
	pthread_join(tid[1], NULL); 

	return 0; 
} 

