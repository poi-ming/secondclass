#include<iostream>
using namespace std;
#include<string>
class employee
{
public:
	employee(string="name",int b=0,string c="teacher");
	~employee();
	void print() const {
		cout << name <<"\t"<< id <<"\t"<< department;
	};
private:
	string name;
	int id;
	string department;
};

employee::employee(string a,int b,string c)
{
	this->name = a;
	this->id = b;
	this->department = c;
}

employee::~employee()
{
}
class manager : public employee
{
public:
	manager(string a, int b, string c, string d) :employee(a, b, c), responsibility(d) {};
		~manager();
	void management();
	void print() const;
private:
	string responsibility;
};


manager::~manager()
{
}
void manager::print()const {
	employee::print();
	cout <<"\t"<< responsibility << endl;
}