#pragma once
#include <vector>
#include <string>
#include <locale.h>

using namespace std;

class magazin
{
public:
	void Filling();
	void Checking();
	void proverka_zapisey();
	void Menu();
private:
	vector<string> FIO;
	vector<string> number;
	vector<string> adres;
	vector<string> date;
	vector<string>::iterator StrIter;
	string STR;
	int size_list;
};

