#include <iostream>
#include <Windows.h>
#include "phonebook_funcs.h"
using namespace std;

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Node *pBegin, *pEnd;
	pBegin = pEnd = FirstItem();
	for (int i = 0; i < 3; i++)
		pEnd = AddItem(pEnd);

	cout << "\nВаш список: " << endl;
	PrintList(pBegin);

	return 0;
}