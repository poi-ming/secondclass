#include"rational.h"
int main() {
	double sum = 0;
	rational rat0;
	cout << rat0 << endl;
	rational rat1 = -rat0;
	cout << rat1 << endl;
	rational rat2 = rat1 + 34;
	cout << rat2 << endl;
	rational rat3;
	rat3 = 12 + rat2;
	rat3++;
	cout << (double)rat3 << endl;
	rational rat4(1, 2);
	for (int i = 0; i < 49; i++)
	{
		sum += rat4;
		rat4++;
	}
	cout << sum<< endl;
	system("pause");
	return 0;
}