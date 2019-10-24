#include<iostream>
#include"date.h"
using namespace std;
void date:: print() {
	cout << year << "\t" << month << "\t" << day << endl;
}
void date::initial() {
	cin >> year >> month >> day;
}