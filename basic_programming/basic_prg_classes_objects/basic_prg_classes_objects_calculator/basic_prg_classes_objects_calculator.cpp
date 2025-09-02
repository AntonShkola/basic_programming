#include <iostream>

using namespace std;

class Calculator
{
private:
	double num1{};
	double num2{};

public:
	Calculator()
	{
		num1 = 0;
		num2 = 0;
	}
	
	bool set_num1(double newNum1)
	{
		if (newNum1 != 0)
		{
			this->num1 = newNum1;
			return true;
		}
		return false;
	}

	bool set_num2(double newNum2)
	{
		if (newNum2 != 0)
		{
			this->num2 = newNum2;
			return true;
		}
		return false;
	}

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double divide_2_1()
	{
		return num2 / num1;
	}

};

int main()
{
	Calculator calc;
	double input1, input2;

	while (true)
	{
		cout << "Enter number 1: ";
		cin >> input1;

		while (!calc.set_num1(input1))
		{
			cout << "Error! Enter number 1: ";
			cin >> input1;
		}

		cout << "Enter number 2: ";
		cin >> input2;

		while (!calc.set_num2(input2))
		{
			cout << "Error! Enter number 2: ";
			cin >> input2;
		}

		cout << "num1 + num2 = " << calc.add() << endl;
		cout << "num1 * num2 = " << calc.multiply() << endl;
		cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
		cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
		cout << "num1 / num2 = " << calc.divide_1_2() << endl;
		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}

	return 0;
}