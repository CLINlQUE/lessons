#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>
using namespace std;

struct Phonebook
{
    string name;
    long number;
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Phonebook ab1,
        *ab2 = new Phonebook;// здесь динамически
    cout << "¬ведите им€ абонента: ";
    getline(cin, ab1.name);
    cout << "¬ведите номер: ";
    cin >> ab1.number;
    ab2 = &ab1;
    cout << "\n¬ведЄнные данные: " << endl;
    cout << setw(25) << ab2->name;
    cout << setw(10) << ab2->number;
    delete  ab2;
    return 0;
}
//struct Date
//{
//    short year;
//    short month;
//    short day;
//}d;
//
//void OutDate(bool day_first)
//{
//    cin >> d.day;
//    cin >> d.month;
//    cin >> d.year;
//    if (day_first)
//        cout << d.day << "." << d.month << "." << d.year << endl;
//    else 
//        cout << d.year << "." << d.month << "." << d.day << endl;
//}
//int main()
//{
//    OutDate(false);
//    return 0;
//}
//struct Address
//{
//    string street;
//    short house;
//    short flat;
//};
//
//
//struct Phonebook
//{
//    string name;
//    long number;
//    Address address;
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    Phonebook ab1;
//    cout << "¬ведите им€ абонента: ";
//    getline(cin, ab1.name);
//    cout << "¬ведите номер: ";
//    cin>> ab1.number;
//    cout <<"¬ведите улицу: ";
//    cin.ignore();
//    getline(cin, ab1.address.street);
//    cout << "¬ведите номер дома: ";
//    cin >> ab1.address.house;
//    cout << "¬ведите номер квартиры: ";
//    cin >> ab1.address.flat;
//    cout <<setw(25) << ab1.name;
//    cout <<setw(10) << ab1.number;
//    cout << setw(10) <<ab1.address.street << ", " << ab1.address.house << ", " << ab1.address.flat;
//
//    
//    return 0;
//}