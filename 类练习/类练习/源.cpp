#include<iostream>
#include"date.h"
#include<cstdlib>
using namespace std;
int main() {
	date today;
	today.initial();
	today.print();
	system("pause");
	return 0;
}