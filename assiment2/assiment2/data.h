#include<iostream>
#include<string>
using namespace std;
class Myinteger
{
public:
	Myinteger(int=40);
	~Myinteger();
	const int get();
	int addition(Myinteger a);
	int parseint(const string&);
private:
	int value;
};

Myinteger::Myinteger(int v)
{
	value = v;
}

Myinteger::~Myinteger()
{
}
const int Myinteger::get() {
	return value;
}
int Myinteger::addition(Myinteger a) {
	return this->value +a.value;
}
int Myinteger::parseint(const string& digital) {
	return atoi(digital.c_str());
}