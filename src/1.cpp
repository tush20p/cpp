#include "../inc/cpp.h"
using namespace std;
main()
{
	char data[100],s[20];

	ofstream fout;
	fout.open("Tushar.text");


	cout << "Enter the data"<< endl;
	cin.getline(data,100);   

	cout << "Enter the name"<< endl;
	cin.getline(s,20);   

	fout << "data - " << data << endl;
	fout << "name - " << s << endl;

	cout << "data - " << data << endl;
	cout << "name - " << s << endl;

	fout.close();

	ifstream fin;
	fin.open("Tushar.text",ios::trunc);

	cout << "reading" << endl;

	fin >> data;
	cout << "data - " << data << endl;

	fin >> s;
	cout << "name - " << s << endl;

}
