#include "magazin.h"
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void magazin::Filling()
{
	setlocale(LC_ALL, "ru");
	cout << "\nВведите ФИО:\n";
	getline(cin, STR);
	getline(cin, STR);
	FIO.push_back(STR);
	cout << "Введите номер телефона:\n";
	getline(cin, STR);
	number.push_back(STR);
	cout << "Введите адрес:\n";
	getline(cin, STR);
	adres.push_back(STR);
	cout << "Введите Дату заполнения:\n";
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
		cout << endl << i+1 << " Клиент:";
		cout << "\nФИО:" << FIO[i];
		cout << "\nНомер телефона:" << number[i];
		cout << "\nАдрес:" << adres[i];
		cout << "\nДата регистрации:\n" << date[i] << endl;
	}
	Menu();
}

void magazin::proverka_zapisey()
{
	for (int i = 0; i < size_list; i++)
	{
		for (int i1 = 1+i; i1 < size_list-1; i1++)
		{
			if (FIO[i] == FIO[i1] && adres[i] == adres[i1])
			{
				StrIter = FIO.begin();
				advance(StrIter, i1);
				FIO.erase(StrIter);
				StrIter = adres.begin();
				advance(StrIter, i1);
				adres.erase(StrIter);
				StrIter = number.begin();
				advance(StrIter, i1);
				number.erase(StrIter);
				StrIter = date.begin();
				advance(StrIter, i1);
				date.erase(StrIter);
				size_list--;
			}
		}
	}
	Menu();
}

void magazin::Menu()
{
	setlocale(LC_ALL, "ru");
	cout << "\n1.Заполнение\n2.Список\n3.Проверка записей\n";
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
	case 3:
		proverka_zapisey();
		break;
	default:
		Menu();
		break;
	}
}
