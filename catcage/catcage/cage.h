#include"cat.h"
bool cn2(int, int, int);
bool cn3(int, int, int);
bool en2(int, int, int);
class cage
{
public:
	cage();
	~cage();
	void print();
	void setcat();
	void check();
	void changes();
private:
	vector<cat> c;//��è
	static int count;
};
int cage::count = 0;
cage::cage() {

}
cage::~cage() {
}
void cage::print() {
	for (int i = 0; i < count; i++)
	{
		c[i].cprint();
		cout << endl;
	}
}//�������è
void cage::changes() {
	c[count - 1].change();
}//�޸�����
void cage::setcat()
{
	cat cats;
	count++;
	c.push_back(cats);
}//��è
void cage::check() {
	switch (cage::count)
	{
	case 1:cout << "no fight" << endl; break;
	case 2: if (cn2(fcblacknum, fcgraynum, fcbrownnum))
	{
		if (en2(ecgreennum, ecbluenum, ecbrownnum)) {
			cout << "no fight" << endl;
		}
		else
		{
			cout << "fight" << endl;
		}
	}
			else
			{
				cout << "no fight" << endl;
			}break;
	default:if (cn3(fcblacknum, fcgraynum, fcbrownnum))
	{
		cout << "no fight" << endl;
	}
			else
			{
				cout << "fight";
			}
			break;
	}

}//���è�Ƿ���
bool cn2(int a, int b, int c) {
	if (a == c || c == b || b == c)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool cn3(int a, int b, int c) {
	if (a == b&&b == c || (a == b && c == 0) || (a == c && b == 0) || (b == c && a == 0) || a == 0 && b == 0 || b == 0 && c == 0 || a == 0 && c == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool en2(int a, int b, int c) {
	if (a == b&&b == 0 || a == c&&c == 0 || b == c&&c == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
#pragma once
