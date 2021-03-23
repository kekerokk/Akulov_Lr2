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
	void Menu();
private:
	vector<string> FIO;
	vector<string> number;
	vector<string> adres;
	vector<string> date;
	vector<int>::iterator IntIter;
	vector<string>::iterator StrIter;
	vector<char>::iterator ChrIter;
	string STR;
	int size_list;
};

