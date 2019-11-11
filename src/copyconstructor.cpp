#include "../inc/copyconstructor.h" 
using namespace std;
class A
{
	int x,y;
	public:
	A():x(1000),y(2000)
	{
		cout <<"Default..."<< endl;
	}
	A(int a,int b=200):x(a),y(b)
	{
		cout <<"Parameterized..."<< endl;
                x=a,y=b;
	}

        A(A&temp)
        {
            cout <<"Copy..."<< endl;
            x=temp.x;
            y=temp.y;
        }
	void print_data()
	{
		cout << x <<"  "<< y << endl;
	}
};

main()
{
	A obj1,obj2(10,20),obj3(obj2),obj4=obj3;
	obj1.print_data();
	obj2.print_data();
	obj3.print_data();
	obj4.print_data();
}
