#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	streampos begin, end;
	ifstream fin("example.txt");
	cout << strlen();
	/*begin = fin.tellg();
	fin.seekg(0, ios::end);
	end = fin.tellg();
	fin.close();
	cout << "\n׀אחלונ פאיכא: " << (end - begin) << " באיע";*/
	return 0;
}