#include<iostream>
#include<ctime>
#include<string>
using namespace std;
class account
{
public:
	account() {};
	~account() {};
	void setnumber(int t) {
		number = t;
	};
	void accountbook() {
		cout << "--------------------------------------" << endl;
		cout << "your number" << "\t" << "your balance" << endl;
		cout << numbers << "\t" << balances<<endl;
		cout << "time"<<endl << __DATE__ << endl;
	};
	void deposit(double a) {
		balance += a;
	};
	void withdraw(double b) {
		balance -= b;
	};
	virtual void const tostring () {
		this->balances= to_string(this->balance);
		this->numbers = to_string(this->number);
		};
private:
protected:
	int number=0;
	double balance=0,annualrate=0.038;
	string balances, numbers;
};
class check :public account 
{
public:
	check() {};
	~check() {};
	double getoverdrift() {
		return overdrift;
	};
	double getbalance() {
		return balance;
	};
	void print() {
		cout << "your balance is" << balance << "at present" << endl;
	};

	void const tostring() override {
		account::tostring();
	};

private:
	double overdrift = 500;
};
class saving :public account
{
public:
	saving() {};
	~saving() {};
	double getbalance() {
		return balance;
	};

	void print() {
		cout << "your balance is" << balance << "at present" << endl;
	};

	void const tostring() override {
		account::tostring();
	};
private:

};
