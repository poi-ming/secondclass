#include"account.h"
bool xp(check& a, double t);
bool xp(saving& a, double t);
int main() {
	int t;
	void meanu(check& t);
	void meanu(saving& t);
	check account1;
	saving account2;
	void save(check& a);
	void save(saving& a);
	void withdraw(check& a);
	void withdraw(saving& a);
printx:cout << "please choice checking(1) or saving(2)" << endl;
	cin >> t;
	switch (t)
	{
	case 1: meanu(account1); break;
	case 2:meanu(account2); break;
	default:cout << "enter error" << endl; goto printx;
	}
	system("pause");
	return 0;
}
void save(check& a) {
	double money;
	cout << "how much would you save" << endl;
	cin >> money;
	a.deposit(money);
};
void save(saving& a) {
	double money;
	cout << "how much would you save" << endl;
	cin >> money;
	a.deposit(money);
};
void withdraw(check& a) {
	double money;
	a.print();
	cout << "your overdrift is" << a.getoverdrift() << endl;
	for (int i = 0; i < 1;)
	{
cout << "how much would you want withdraw";
	cin >> money;
	if (xp(a,money))
	{
		a.withdraw(money); break;
	}
	else
	{
		cout << "over your overdrift"<<endl;
	}
	}
	
};
void withdraw(saving& a) { 
double money;
a.print();
for (int i = 0; i!=1;)
{
cout << "how much would you want withdraw";
cin >> money;
if (xp(a, money))
{
	a.withdraw(money); break;
}
else
{
	cout << "over your balance" << endl;
}
}
};
bool xp(check& a,double t) {
	double x = (a.getoverdrift() + a.getbalance());
		if (t>x)
		{
			return false;
		}
		else
		{
			return true;
		}
};
bool xp(saving& a, double t) {
	if (a.getbalance()<t)
	{
		return false;
	}
	else
	{
		return true;
	}
};
void meanu(check& t) {
	int x,y,z;
	cout << "you choice check account" << endl;
	cout << "please enter your account number" << endl;
	cin >> x;
	t.setnumber(x);
printy:	cout << "save(1) or withdraw(2)" << endl;
	cin >> y;
	switch (y)
	{
	case 1:save(t); break;
	case 2:withdraw(t); break;
		default:cout << "enter error" << endl; goto printy;
	}
	t.tostring();
	t.accountbook();
printz:	cout << "do you want anything yes(1) no(2)" << endl;
	cin >> z;
	switch (z)
	{
	case 1:goto printy; break;
	case 2:break;
	default: goto printz;

	}
};
void meanu(saving& t) {
	int x, y,z;
	cout << "you choice saving account" << endl;
	cout << "please enter your account number" << endl;
	cin >> x;
	t.setnumber(x);
printy:	cout << "save(1) or withdraw(2)" << endl;
	cin >> y;
	switch (y)
	{
	case 1:save(t); break;
	case 2:withdraw(t); break;
	default:cout << "enter error" << endl; goto printy;
	}
	t.tostring();
	t.accountbook();
printz:	cout << "do you want anything yes(1) no(2)" << endl;
	cin >> z;
	switch (z)
	{
	case 1:goto printy; break;
	case 2:break;
	default: goto printz;
	}
};