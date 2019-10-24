//requirements
//the grade book includes course's name,hour and lecturer,as well as student's id,name and grade
//input all information;
//calculate the average grade;
//print the grade book;
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//declaration the constants
const int studentnum = 5;
//set the course's information
void setcourseinfo(string &cname, string &lecname, int &chour);
void setgrade(int(&sno)[studentnum], string(&sname)[studentnum],int(&g)[studentnum]);
double average(int g[]);
void printcourseinfo(string, string, int);
void printgradebook(int*, string*, int*);
int main() {
	string couresename;
	string lecture;
	int coursehour;
	
	int studentno[studentnum];
	string studentname[studentnum];
	int studentgrade[studentnum];
	//read the course and student date;
	setcourseinfo(couresename, lecture, coursehour);
	setgrade(studentno, studentname, studentgrade);
	//display the course and student date
	printcourseinfo(couresename, lecture, coursehour);
	printgradebook(studentno, studentname, studentgrade);
	system("pause");
	return 0;
}
void setcourseinfo(string &cname, string &lecname, int &chour) {
	cout << "plz enter the course information" << endl;
	cin >> cname >> lecname >> chour;
}
void setgrade(int(&sno)[studentnum], string(&sname)[studentnum], int(&g)[studentnum]) {
	cout << "plz enter the students information" << endl;
	for (int i = 0; i < studentnum; i++)
	{
		sno[i] = i + 1;
		cin >> sname[i] >> g[i];
	}
}
double average(int g[]) {
	int sum = 0;
	for (int i = 0; i < studentnum; i++)
	{
		sum += g[i];
	}
	return static_cast<double>(sum) / studentnum;
}
void printcourseinfo(string cname, string lecname, int chour) {
	cout << "course name: " << cname
		<< "lecture: " << lecname
		<< "course huor: " << chour << endl;
}
void printgradebook(int* sno, string* sname, int* sg) {
	cout << "--------------------------------\n";
	cout << "studentNO	name    grade\n";
	for (int i = 0; i < studentnum; i++)
	{
		cout << setw(9) << right << sno[i]
			<< setw(10) << sname[i]
			<< setw(4) << right << sg[i] << endl;
	}
	cout << "----------------------------------\n";
	cout << "the average grade:" << average(sg) << endl;
}




