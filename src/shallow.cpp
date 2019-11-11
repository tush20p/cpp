#include "../inc/shallow.h"
 using namespace std;
 class shallow
 {
   char *str;
       public:
         //  shallow() {}
           shallow(const char *s)
           {
             str= new char[strlen(s)+1];
             strcpy(str,s);
           }
         void modify()
         {
            cout <<"shallow copy......"<< endl;
            str[0]='S';
         }
         

         void print_data()
         {
              cout << str << endl;
         }
 };

main()
{
   shallow obj1("Vector..."), obj2(obj1);
   obj1.print_data();
   obj2.print_data();
   obj1.modify();
   obj1.print_data();
   obj2.print_data();
   
}
