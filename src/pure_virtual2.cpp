#include "../inc/poly.h"

using namespace std;
class A
{
  public:
       virtual void test1()
       {
            cout<<"test1 in A"<< endl;
       }
       virtual  void test2()=0;
};

class B:public A
{
    public:
         void test1()
         {
             cout<<"test1 in B"<< endl;
         }
 
         void test2()
         {
             cout<<"test2 in B"<< endl;
         }
};

class C:public A
{
    public:
         void test1()
         {
             cout<<"test1 in C"<< endl;
         }
 
         void test2()
         {
             cout<<"test2 in C"<< endl;
         }
};

main()
{
   A *obj1;
   C obl2;
	obj1=&obl2;
   obj1->test1();
}
