#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int random() {
	srand((int)time(0));
	return rand() % (100 - 1) + 1;
}
int main() {
	cout << random();
	system("pause");
	return 0;

}