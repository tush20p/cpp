#include "../inc/signal.h"
using namespace std; 

void signal_handler( int signal_num ) { 
	cout << "The interrupt signal is (" << signal_num << "). \n"; 

	// terminate program 
	exit(signal_num); 
} 

int main () 
{ 
	signal(SIGINT, signal_handler); 
	int i=0;
	while(i<7) 
	{
		cout << "Hello GeeksforGeeks..." << endl; 
		sleep(1);
		i++;
	}

	return 0; 
}
