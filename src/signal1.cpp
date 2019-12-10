#include "../inc/signal.h"
using namespace std;

void signalHandler( int signum ) {
   cout << "Interrupt signal " << signum << " received." << endl;

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

int main () {
   // register signal SIGINT and signal handler  
//   signal(SIGINT, signalHandler);  

   while(1) {
   signal(SIGINT, signalHandler);  
      cout << "Going to sleep...." << endl;
      sleep(1);
   }

   return 0;
}
