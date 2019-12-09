#include "../inc/poly.h"

using namespace std; 

class base 
{ 
	public: 
		void fun_1()
		{
			cout << "base-1\n";
		} 
		virtual void fun_2()
		{
			cout << "base-2\n";
		} 
		virtual void fun_3()
		{
			cout << "base-3\n";
		} 
		virtual void fun_4()
		{
			cout << "base-4\n";
		} 
}; 

class derived : public base 
{ 
	public: 
		void fun_1()
		{
			cout << "derived-1\n";
		} 
		void fun_2() 
		{
			cout << "derived-2\n";
		} 
		void fun_4() 
		{
			cout << "derived-4\n";
		} 
}; 

int main() 
{ 
	base *p; 
	derived obj1; 
	p = &obj1; 

	// Early binding because fun1() is non-virtual 
	p->fun_1(); 

	// Late binding 
	p->fun_2(); 

	// Late binding  
	p->fun_3(); 

	// Late binding  
	p->fun_4(); 

	// derived class 
	//p->fun_4(5); 
} 
