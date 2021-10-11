#include<iostream>
#include<string>
#include<ctime>
using namespace std;

template <typename T>
inline void Input(const std::string message, T &value)
{
    std::cout << message;
    std::cin >> value;
}
union MyUn
{
    short menu;
    short year;
}u;

void Menu(void)
{
    cout << "\n1 - годовщина свадьбы";
    cout << "\n2 - високосный ли год";
    cout << "\n3 - лунное число текущего года";
    cout << "\n4 -выход";
}
using years = long;
using one_year = short;
years DateDif(short year)
{
    time_t t;
    time(&t);
    return 1900 + localtime(&t)->tm_year - year;
}
void WeddingAnniversary(one_year year)
{
    enum Wedding
    {
        sitcevaya = 1, bemazhnaya, kozh
    };
    years y = DateDif(year);
    switch (y)
    {
    case  Wedding::sitcevaya:
        cout << endl << y << " -ситцевая свадьба";
        break;
        // и т. д.

    default:
        cout << "нет такой свадьбы";
    }
}
bool IsleapYear(one_year year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    return false;
}
short MoonNum(one_year year) { return year % 19 + 1; }

int main()
{
    setlocale(LC_ALL, "Rus");
    while (true)
    {
        system("cls");// очистка консоли
        Menu();
        Input("\nВыберите пункт меню: ", u.menu);
        switch (u.menu)
        {
        case 1:
            Input("\nВведите год", u.year);
            WeddingAnniversary(u.year);
            break;
        case 2:
            Input("\nВведите год", u.year);
            if (IsleapYear(u.year))
                cout << u.year << "високосный год";
            else
                cout << u.year << "невисокосный год";
            break;
        case 3:
            Input("Введите год", u.year);
            cout << "\nЛунное число " << u.year << "года:" << MoonNum(u.year);
            break;
        case 4:
            return 0;
        default:
            cout << "\nНеверный пункт меню";
        }
        cout << endl;
        system("pause");
    }
    return 0;
}