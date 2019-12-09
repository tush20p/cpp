#include "../inc/poly.h"

using namespace std;
class A
{
  public:
       virtual void test1()
       {
            cout<<"test1 int A"<< endl;
       }
       virtual void test2()=0;
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

main()
{
   A *p;
   B obj;
   p=&obj;
   p->test1();
  // cout<<"AddrA: "<<(unsigned int)A::test2<< endl;
//   cout<<"AddrB: "<<(unsigned int)B::test2<< endl;
}
