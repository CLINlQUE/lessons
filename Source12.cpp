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
    cout << "\n1 - ��������� �������";
    cout << "\n2 - ���������� �� ���";
    cout << "\n3 - ������ ����� �������� ����";
    cout << "\n4 -�����";
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
        cout << endl << y << " -�������� �������";
        break;
        // � �. �.

    default:
        cout << "��� ����� �������";
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
        system("cls");// ������� �������
        Menu();
        Input("\n�������� ����� ����: ", u.menu);
        switch (u.menu)
        {
        case 1:
            Input("\n������� ���", u.year);
            WeddingAnniversary(u.year);
            break;
        case 2:
            Input("\n������� ���", u.year);
            if (IsleapYear(u.year))
                cout << u.year << "���������� ���";
            else
                cout << u.year << "������������ ���";
            break;
        case 3:
            Input("������� ���", u.year);
            cout << "\n������ ����� " << u.year << "����:" << MoonNum(u.year);
            break;
        case 4:
            return 0;
        default:
            cout << "\n�������� ����� ����";
        }
        cout << endl;
        system("pause");
    }
    return 0;
}