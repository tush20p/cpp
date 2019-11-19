#include "../inc/exp1.h"
using namespace std;
class A
{
  int x,y;
       public:
            A(){}
            A(int a,int b):x(a),y(b){}
            A operator +(const A &t)
            {
                 A res;
                 res.x = x + t.x;
                 res.y = y + t.y;
                 return res;
            }
           
            A operator -(const A &t)
            {
                A res;
                res.x= x  - t.x;
                res.y= y  - t.y;
                return res;
            } 
            A operator *(const A &t)
            {
               A res;
               res.x= x * t.x;
               res.y= y * t.y;
               return res;
            }
            A operator /(const A &t)
            {
               A res;
               res.x= x / t.x;
               res.y= y / t.y;
               return res;
            }
            void print_data()
            {
                 cout<<"x: "<< x <<"  "<<"y: "<< y << endl;
            }
};

main()
{
   A obj1(1,1),obj2(2,2),obj3(3,3),obj4(4,4),obj5(2,2),obj6;
   obj6= obj1 + obj2 * obj3 - obj4 / obj5;
   obj6.print_data();
}
