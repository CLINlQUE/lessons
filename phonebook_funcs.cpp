#include "phonebook_funcs.h"
#include <iostream>
#include <string>
using namespace std;

void OutputStruct(const Phonebook &ad)
{
	cout << "\nАбонент: " << ad.name;
	cout << "\nНомер: " << ad.number;
	cout << "\nАдрес: " << ad.address.street << "," << ad.address.house << "-" << ad.address.flat;
	cout << "\nДата рождения: " << ad.date.day << "." << ad.date.month << "." << ad.date.year;
}

void InputStruct(Phonebook &ad)
{
	cout << "Press enter";
	cin.ignore();
	cout << "Введите имя абонента: ";
	getline(cin, ad.name);
	cout << "\nВведите номер: ";
	cin >> ad.number;
	cout << "\nВведите улицу: ";
	cin.ignore();
	getline(cin, ad.address.street);
	cout << "\nВведите номер дома: ";
	cin >> ad.address.house;
	cout << "\nВведите номер квартиры: ";
	cin >> ad.address.flat;
	InputDate(ad);
}

void InputDate(Phonebook &ad)
{
	cout << "\nВведите год рождения: ";
	cin >> ad.date.year;
	cout << "\nВведите месяц рождения: ";
	cin >> ad.date.month;
	cout << "\nВведите день рождения: ";
	cin >> ad.date.day;
}

//void SearchByName(const Phonebook* ad, int size, string key)
//{
//	for (int i = 0; i < size; i++)
//		if (key == ad[i].name)
//		{
//			OutputStruct(ad[i]);
//			return;
//		}
//		cout << "Такого абонента не существует." << endl;
//}

Node *FirstItem(void)
{
	Node *ptr_value = new Node;
	InputStruct(ptr_value -> subscriber);
	ptr_value -> next = nullptr;
	return ptr_value;
}

Node *AddItem(Node *ptr_end)
{
	Node *ptr_value = new Node;
	InputStruct(ptr_value -> subscriber);
	ptr_value -> next = nullptr;
	ptr_end -> next = ptr_value;
	return ptr_value;
}

void PrintList(Node *ptr_begin)
{
	Node *ptr_value;
	for (ptr_value = ptr_begin; ptr_value != nullptr; ptr_value = ptr_value -> next)
		OutputStruct(ptr_value -> subscriber);
	return;
}