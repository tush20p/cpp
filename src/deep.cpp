#include "../inc/deep.h"
using namespace std;
class deep
{
	char *str;
	public:
	deep() {}
	deep(const char *s)
	{
		str= new char[strlen(s)+1];
		strcpy(str,s);
	}
	void modify()
	{
		cout <<"deep copy......"<< endl;
		str[0]='S';
	}

	deep(deep &temp)
	{
		str= new char[strlen(temp.str)+1];
		strcpy(str,temp.str);
	}
	void print_data()
	{
		cout << str << endl;
	}
};

main()
{
	deep obj1("Vector..."), obj2(obj1);
	obj1.print_data();
	obj2.print_data();
	obj2.modify();
	obj1.print_data();
	obj2.print_data();

}
