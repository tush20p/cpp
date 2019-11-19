#include "../inc/plusop.h"
using namespace std;
class A
{
  int x,y;
       public:
            A(){}
            A(int a,int b):x(a),y(b){}
            A operator +(A t)
            {
                 A res;
                 res.x = this->x + t.x;
                 res.y = this->y + t.y;
                 return res;
            }
            
            void print_data()
            {
                 cout<<"x: "<< x <<"  "<<"y: "<< y << endl;
            }
};

main()
{
   A obj1(10,20),obj2(100,200),obj3;
   obj3= obj1 + obj2;
   obj3.print_data();
}
