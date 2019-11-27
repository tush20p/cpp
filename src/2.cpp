#include "../inc/cpp.h"
using namespace std;
main()
{
   char s[20];

   ifstream fin("tushar");
   fin.getline(s,20);

   ofstream fout("vvdn");
   fout << s << endl;

   remove("tushar");
   rename("vvdn","tushar");
}
