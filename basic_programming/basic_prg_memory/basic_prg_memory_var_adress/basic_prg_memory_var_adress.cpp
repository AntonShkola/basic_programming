#include <iostream> 

using namespace std;

int main()
{

	int number1{};
	short number2{};
	long number3{};
	long long number4{};
	float number5{};
	double number6{};
	long double number7{};
	bool test{};


	cout << "int " << &number1 << ' ' << sizeof(number1) << endl;
	cout << "short " << &number2 << ' ' << sizeof(number2) << endl;
	cout << "long " << &number3 << ' ' << sizeof(number3) << endl;
	cout << "long long " << &number4 << ' ' << sizeof(number4) << endl;
	cout << "float " << &number5 << ' ' << sizeof(number5) << endl;
	cout << "double " << &number6 << ' ' << sizeof(number6) << endl;
	cout << "long double " << &number7 << ' ' << sizeof(number7) << endl;
	cout << "bool " << &test << ' ' << sizeof(test) << endl;



	return 0;
}