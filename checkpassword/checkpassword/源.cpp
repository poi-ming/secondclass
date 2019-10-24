//password check
#include<iostream>
#include<cstdlib>
using namespace std;
bool checkl(char *pass);
bool checkc1(char *pass);
bool checkc2(char *pass);
int main() {
	char password[20],c='y';
	
	
	while (c=='y')
	{
		cout << "plz enter your password" << endl;
		cin >> password;
		if (checkl(password)&&checkc1(password)&&checkc2(password))
	{
		cout << "valid";
	}
	else
	{
		cout << "unvalid";
	}
		cout << "是否继续" << endl << "输入y继续" << "\t" << "输入n停止"<<endl;
		cin >> c;
	}
	system("pause");
	return 0;
}
bool checkl(char *pass) {
	int num = 0;
	for (int i = 0; pass[i]!='\0'; i++)
	{
		num += 1;
	}
	if (num>=8)
	{
		return true;
	}
	else {
		return false;
	}

}
bool checkc1(char *pass) {
	for (int i = 0; pass[i] !='\0'; i++)
	{
		if (int(pass[i]) < 48 || (int(pass[i]) > 57 && int(pass[i]) < 65) || (int(pass[i]) > 90 && int(pass[i]) < 97 )|| int(pass[i]) > 122) {
			return false;
		}
	}
	return true;
}
bool checkc2(char *pass) {
	int sum = 0;
	for (int i = 0; pass[i] != '\0'; i++)
	{
		if (int(pass[i])>47&& int(pass[i])<58) {
			sum++;
		}
	}
	if (sum>=2)
	{
		return true;
	}
	return false;
}


