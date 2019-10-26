#include<iostream>
using namespace std;
class integer
{
public:
	integer(int v) :value(v) {}
	integer operator+(integer& i);
	friend integer operator- (integer& i1, integer& i2);
	void print() const;
	~integer();

private:
	int value;
};
integer integer::operator+ (integer& i) {
	integer temp(0);
	temp.value = this->value + i.value;
	return temp;
}
integer operator-(integer& i1, integer& i2) {
	integer temp(0);
	temp.value = i1.value - i2.value;
	return temp;
}
void integer::print()const{
	cout << value << endl;

}
integer::~integer()
{
}