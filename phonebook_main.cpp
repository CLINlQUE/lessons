#include <iostream>
#include<Windows.h>
#include "phonebook_funcs.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Phonebook ad;
	Date ab;
	InputStruct(ad);
	InputDate(ab);
	OutputStruct(ad, ab);
	//OutputDate(ab);
	return 0;
}