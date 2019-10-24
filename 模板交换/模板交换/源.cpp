#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
template<typename T>
void Swap(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
};

struct student{
	int num;
	string name;
	int	age;
};
int main() {
	student student1 = { 1,"wang",15 };
	student student2 = { 2,"mang",51 };
	cout << student1.num << "\t" << student1.name << "\t" << student1.age << endl;
	cout << student2.num << "\t" << student2.name << "\t" << student2.age << endl;
	Swap(student1, student2);
	cout << student1.num << "\t" << student1.name << "\t" << student1.age << endl;
	cout << student2.num << "\t" << student2.name << "\t" << student2.age << endl;
	system("pause");
	return 0;

}

