#include "phonebook_funcs.h"
#include <iostream>
#include <string>
using namespace std;

void OutputStruct(const Phonebook &ad)
{
	cout << "\n�������: " << ad.name;
	cout << "\n�����: " << ad.number;
	cout << "\n�����: " << ad.address.street << "," << ad.address.house << "-" << ad.address.flat;
	cout << "\n���� ��������: " << ad.date.day << "." << ad.date.month << "." << ad.date.year;
}

void InputStruct(Phonebook &ad)
{
	cout << "Press enter";
	cin.ignore();
	cout << "������� ��� ��������: ";
	getline(cin, ad.name);
	cout << "\n������� �����: ";
	cin >> ad.number;
	cout << "\n������� �����: ";
	cin.ignore();
	getline(cin, ad.address.street);
	cout << "\n������� ����� ����: ";
	cin >> ad.address.house;
	cout << "\n������� ����� ��������: ";
	cin >> ad.address.flat;
	InputDate(ad);
}

void InputDate(Phonebook &ad)
{
	cout << "\n������� ��� ��������: ";
	cin >> ad.date.year;
	cout << "\n������� ����� ��������: ";
	cin >> ad.date.month;
	cout << "\n������� ���� ��������: ";
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
//		cout << "������ �������� �� ����������." << endl;
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