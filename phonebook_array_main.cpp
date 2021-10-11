#include <iostream>
#include<Windows.h>
#include "phonebook_funcs.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 3;
	string key;
	bool searching_flag = 0;
	Phonebook ad[size];
	for (auto &a : ad)
	{
		InputStruct(a);
		return;

	}
	cout << "\n¬ведите фамилию дл€ поиска: ";
	getline(cin, key);
	SearchingName(a, size, searching_name);

	return 0;
}
