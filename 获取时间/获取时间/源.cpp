#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void times() {
	cout << __TIME__" " << __DATE__;
}
int main() {
	times();
	system("pause");
	return 0;
}