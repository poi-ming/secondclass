
//eye color "green blue brown",fur color "black gray brown" ,fur length "long short"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
static int ecgreennum = 0;
static int fcblacknum = 0;
static int fllongnum = 0;
static int ecbluenum = 0;
static int fcgraynum = 0;
static int flshortnum = 0;
static int ecbrownnum = 0;
static int fcbrownnum = 0;

int random2() {
	return rand() % 2 + 1;
}
int random() {
	return rand() % 3 + 1;
}

string eyecol() {
	switch (random())
	{
	case 1:
		ecgreennum++;
		return "green";
	case 2:
		ecbluenum++;
		return "blue";
	case 3:
		ecbrownnum++;
		return "brown";
	}
}
string furcol() {
	switch (random())
	{
	case 1:
		fcblacknum++;
		return "black";
	case 2:fcgraynum++;
		return "gray";
	case 3:fcbrownnum++;
		return "brown";
	}
}
string furlength() {
	switch (random2())
	{
	case 1:fllongnum++;
		return "longth";
	case 2:flshortnum++;
		return "shrot";
		break;
	}
}
class cat
{
public:
	cat();
	~cat();
	void cprint();
	void change();
private:
	string eyeco, furco, furlenth;
};
cat::cat()
{
	eyeco = eyecol();
	furco = furcol();
	furlenth = furlength();
}//³õÊ¼Ã¨
cat::~cat()
{
}
void cat::cprint() {
	cout << furco << "\t" << eyeco << "\t" << furlenth;
}//´òÓ¡Ã¨
void cat::change() {
	cout << "please enter the change data,thefurcolor,the eye's color,the fur lenth" << endl;
	cin >> eyeco >> furco >> furlenth;
}//ÐÞ¸ÄÃ¨