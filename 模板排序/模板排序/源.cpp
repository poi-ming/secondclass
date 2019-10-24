#include<iostream>
#include<algorithm>
using namespace std;
const int studentnum = 5;

template<class T>
void Sort(T (&a)[studentnum], int n) {
	sort(a, a + n);
}
int main() {
	
	float a[studentnum] = { 13.55,49.16,65.59,48.44,79.16 };
	Sort(a,studentnum);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
	return 0;

}