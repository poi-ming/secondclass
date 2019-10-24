#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
const int studentnum = 5;
void input(string &school, string &classname, int(&num)[studentnum], string (&stuname)[studentnum] );
void output(string &school, string &classname);
void output(int*, string*);
int main() {
	string school;
	string classname;
	int stunum[studentnum];
	string stuname[studentnum];
	
	input(school,classname,stunum,stuname);
	output(school,classname);
	output(stunum, stuname);
	system("pause");
	return 0;
}
void input(string &school, string &classname, int(&num)[studentnum], string(&stuname)[studentnum]) {
	cout << "pls enter the student's number ,their name and their own schoolname and classname" << endl;
	cout << "pls enter their schoolname and classname" << endl;
	cin >> school >> classname;
	cout << "plz enter the student's num and name" << endl;
	for (int i = 0; i < studentnum; i++)
	{
		cin >> num[i] >> stuname[i];
	}
}
void output(string &school, string &classname) {
	cout << "---------------------------------------" << endl;
	cout << school << "\t" << classname<< endl;
}
void output(int* num, string* stuname) {
	for (int i = 0; i < studentnum; i++)
	{
		cout << num[i] << "\t" << stuname[i] << endl;
	}
}

