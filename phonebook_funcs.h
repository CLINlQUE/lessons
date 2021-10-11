#include <string>
#ifndef PHONEBOOK_FUNCS_H
#define PHONEBOOK_FUNCS_H

struct Address
{
	std::string street;
	short house;
	short flat;
};

struct Date
{
	short year;
	short month;
	short day;
};

struct Phonebook
{
	std::string name;
	long long number;
	Address address;
	Date date;
};

struct Node
{
	Phonebook subscriber;
	Node *next;
};

void InputDate(Phonebook &ad);
void InputStruct(Phonebook &ad);
void OutputStruct(const Phonebook &ad);
//void SearchByName(const Phonebook *ad, int size, string key);
Node *FirstItem(void);
Node *AddItem(Node *ptr_end);
void PrintList(Node *ptr_begin);
#endif