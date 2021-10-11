#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

void Func(double v)
{
	if (v == 0)
	{
		throw "Деление на 0";
	}
	cout << 100. / v;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a = 5, b;

	try
	{
		Func(0);
	}
	catch (const std::exception &e)
	{
		cout << e.what();
	}
	catch (const char *e)
	{
		cout << e;
	}
	return 0;
}