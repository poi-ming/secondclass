#include"integer.h"
int main() {
	integer a(13);
	integer b(12);
	integer c = b;
	a = b + c;
	a.print();
	b = b + c-a;
	b.print();
	system("pause");
	return 0;
}