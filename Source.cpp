#include <iostream>
using namespace std;
void main() {
	cout << "Enter ip adress: ";
	int abc;
	cin  >> abc;
	if (abc <= 127)
	{
		cout << "class A";
	}
	else if (abc >= 128 && abc <= 191)
	{
		cout << "class B";
	}
	else if (abc >= 192 && abc <= 223)
	{
		cout << "class C";
	}
	else if (abc >= 224 && abc <= 239)
	{
		cout << "class D";
	}
	else if (abc >= 240 && abc <= 255)
	{
		cout << "class E";
	}
	system("pause>>void");
}