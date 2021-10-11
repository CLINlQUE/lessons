#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("test.txt");
	fout << "Это записано в файл";
	fout.close();
	return 0;
}