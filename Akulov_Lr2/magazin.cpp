#include "magazin.h"
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void magazin::Filling()
{
	setlocale(LC_ALL, "ru");
	cout << "\n������� ���:\n";
	getline(cin, STR);
	getline(cin, STR);
	FIO.push_back(STR);
	cout << "������� ����� ��������:\n";
	getline(cin, STR);
	number.push_back(STR);
	cout << "������� �����:\n";
	getline(cin, STR);
	adres.push_back(STR);
	cout << "������� ���� ����������:\n";
	getline(cin, STR);
	date.push_back(STR);
	size_list++;
	Menu();
}

void magazin::Checking()
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < size_list; i++)
	{
		cout << endl << i+1 << " ������:";
		cout << "\n���:" << FIO[i];
		cout << "\n����� ��������:" << number[i];
		cout << "\n�����:" << adres[i];
		cout << "\n���� �����������:" << date[i] << endl;
	}
	Menu();
}

void magazin::Menu()
{
	setlocale(LC_ALL, "ru");
	cout << "\n1.����������\n2.������\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		Filling();
		break;
	case 2:
		Checking();
		break;
	default:
		Menu();
		break;
	}
}
