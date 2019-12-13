#include "../inc/mt.h"
using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
//	long tid;
//	tid = (long)threadid;
	cout << "Hello World! Thread ID, " << threadid << endl;
	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[NUM_THREADS];
	int rc;
	int i;

	for( i = 0; i < NUM_THREADS; i++ )
	{
		cout << "main() : creating thread, " << i << endl;
		rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&i);
sleep(1);
		if (rc) 
		{
			cout << "Error:unable to create thread," << rc << endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
}
