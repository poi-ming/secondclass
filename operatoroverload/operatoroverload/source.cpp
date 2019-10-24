#include"complex.h"
int main() {
	complex a(1, 3.1);
	complex b(1.2,2);
	complex c = b;
	a = b.add(c);//a=b+c;
	b = b.add(c.multiply(a)); //b = b + c*a;
	c = a.multiply(b).add(complex(1, 2));//c=a*b+complex(1,2)
	a.print();
	b.print();
	c.print();
	system("pause");
	return 0;
}