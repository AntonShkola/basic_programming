#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
	int count;

public:
	Counter()
	{
		count = 1;
	}

	Counter(int initialValue)
	{
		count = initialValue;
	}

	void increment()
	{
		count++;
	}

	void decrement()
	{
		count--;
	}

	int getValue() const
	{
		return count;
	}
};

int main()
{
	string choice;
	cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
	cin >> choice;

	int initial = 1;
	if (choice == "yes")
	{
		cout << "Enter the initial value of the counter: ";
		cin >> initial;
	}

	Counter counter(initial);

	string cmd;
	while (true)
	{
		cout << "Enter the command('+', '-', '=' or 'x'): ";
		cin >> cmd;

		if (cmd == "+")
		{
			counter.increment();
		}
		else if (cmd == "-")
		{
			counter.decrement();
		}
		else if (cmd == "=")
		{
			cout << counter.getValue() << endl;
		}
		else if (cmd == "x")
		{
			cout << "Goodbye";
			break;
		}
		else
		{
			cout << "Invalid command" << endl;
		}
	}

	return 0;
}