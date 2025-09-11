#include <iostream>

using namespace std;

void function();

void changeValue(int& value)
{
	value = 5;
	//cout << value << endl;
}

int main()
{
	int var{ 1000 };

	cout << var << endl;
	changeValue(var);
	cout << var << endl;

	cout << function << endl;
	cout << &function << endl;
	cout << addressof(function) << endl;

	// оператор взятия адреса
	/*int var1{ 1 };
	float var2{ 2.2f };
	double var3{ 3.3 };
	char symbol{ 'a' };

	cout  << var1 << ' ' << &var1 << ' ' << sizeof(var1) << endl;
	cout  << var2 << ' ' << &var2 << ' ' << sizeof(var2) << endl;
	cout  << var3 << ' ' << &var3 << ' ' << sizeof(var3) << endl;
	cout  << symbol << ' ' << static_cast<void*>(&symbol) << ' ' << sizeof(symbol) << endl;*/

	return 0;
}

void function()
{

}