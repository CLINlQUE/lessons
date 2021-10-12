#include <vector>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <int> inspektor1(3);
	vector <int> inspektor2;
	inspektor2.reserve(3);

	cout << "«начение первого вектора (с помощью скобок): ";

	for (int i = 0; i < 3; i++)
		cout << inspektor1.size() << " ";

	cout << "\n«начение второго вектора (с помощью reserve): " ;

	for (int i = 0; i < 3; i++)
		cout << inspektor2.size() << " ";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <string> vec_string;
	vec_string.push_back("апельсин");
	vec_string.push_back("груша");
	vec_string.push_back("€блоко");
	vec_string.push_back("вишн€");
	for (int i = 0; i < vec_string.size(); i++)
		cout << vec_string[i] << " ";

	cout << endl;
	vec_string.pop_back();

	for (int i = 0; i < vec_string.size(); i++)
		cout << vec_string[i] << " ";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <int> inspektor(2);
	inspektor[0] = 2;
	inspektor[1] = 3;
	for (int i = 0; i < inspektor.size(); i++)
		cout << inspektor[i] << " ";

	cout << endl;

	inspektor.insert(inspektor.begin(), 1);
	for (int i = 0; i < inspektor.size(); i++)
		cout << inspektor[i] << " ";

	cout << endl;
	inspektor.insert(inspektor.end(), 4);
	for (int i = 0; i < inspektor.size(); i++)
		cout << inspektor[i] << " ";

}