#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string line, file = "";
	ifstream fin("example.txt");
	int counter = 0;
	if(fin.is_open())
	{
		while (getline(fin, line))
		{
			for (auto &i : line)
				if (i >= '0' && i <= '9')
					i = '*';
			if (line.length() == 0)
				file += '\n';	
			else
				file += line + '\n';
		}
			//counter += 1; //line.length() это для счетчика символов
		fin.close();
	}
	else cout << "Невозможно открыть файл";

	ofstream fout("example.txt");
	if (fout.is_open())
	{
		fout << file;
		fout.close();
	}
	/*cout << counter;*/
	return 0;
}