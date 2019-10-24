#include<iostream>
using namespace std;
class complex
{
public:
	complex(double r, double i) :real(r), imag(i) {};
	~complex();
	complex add(complex& c);
	complex multiply(complex& c);
	void print();
private:
	double real, imag;

};

complex::~complex()
{
}
complex complex::add(complex& c) {
	complex temp(0, 0);
	temp.real = this->real + c.real;
	temp.imag = this->imag + c.imag;
	return temp;
}
complex complex::multiply(complex& c) {
	complex temp(0, 0);
	temp.real = this->real*c.real - this->imag*c.imag;
	temp.imag = this->imag*c.real - this->real*c.imag;
	return temp;
}
void complex::print() {
	cout << real << "\t" << imag << endl;
}