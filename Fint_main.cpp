#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string line;
	ifstream fin("example.txt");
	if (fin.is_open())
	{
		while (getline(fin, line))
			cout << line << endl;
		fin.close();
	}
	else cout << "Невозможно открыть файл";
	return 0;
}