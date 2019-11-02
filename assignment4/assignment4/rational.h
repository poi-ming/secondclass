#include<iostream>
#include<cmath>
using namespace std;
class rational
{
public:
	rational(double=9,double=3);
	~rational();
	void print();
	rational operator+(rational& n);
	friend ostream& operator<<(ostream& out,rational a);
	rational operator-(rational& n);
	rational operator-();
	rational operator+(int n);
	friend rational operator+(int n, rational& m);
	operator double();
	rational& operator++(int);
private:
 double a,b;
};

rational::rational(double a,double b)
{
	this->a = a;
	this->b = b;

}
void rational::print() {

}
rational::~rational()
{
}
rational rational::operator+(rational& n) {
	rational temp;
	temp.a = this->a + n.a;
	temp.b = this->b + n.b;
	return temp;
}
ostream& operator<<(ostream& out,rational a) {
	out << a.a/a.b;
	return out;
}
rational rational::operator-(rational& n) {
	rational temp;
	temp.a = this->a - n.a;
	temp.b = this->b - n.b;
	return temp;
}
rational rational::operator-() {
	rational temp;
	temp.a = -this->a;
	temp.b = this->b;
	return temp;
}
rational rational::operator+(int n) {
	rational temp;
	temp.a = this->b*n + this->a;
	temp.b = this->b;
	return temp;
}
rational operator+(int n, rational& m) {
	rational temp;
	temp.a = m.a + n*m.b;
	temp.b = m.b;
	return temp;
}
rational::operator double() {
	return a / b;
}
rational& rational::operator++(int) {
	rational temp(*this);
	this->a++;
	this->b++;
	return temp;
}