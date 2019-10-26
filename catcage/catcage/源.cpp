#include"cage.h"
int main() {
	srand((int)time(0));
	cage ca;
	cout << "please enter the 'Enter' to create the cat" << endl;
	cout << "furcolor" << "	" << "eyecolor" << "	" << "furlength" << endl;
	while (cin.get())
	{
		ca.setcat();
		ca.print();
		ca.check();
	}
	system("pause");
	return 0;
}