#include <iostream>

using namespace std;

enum class Months { january = 1,february,march,april,may,june,july,august,september,october,november,december };

int getMonthInput()
{
	int input;
	cout << "Please enter the month number " << endl;
	cin >> input;
	return input;
}

int main()
{	
	int monthNumber;

	do
	{
		monthNumber = getMonthInput();
		Months month{ static_cast<Months>(monthNumber) };

		if (monthNumber == 0)
		{
			cout << "Goodbay, my friend..." << endl;
			break;
		}		

		switch (month)
		{
		case Months::january:
			cout << "January" << endl;
			break;
		case Months::february:
			cout << "February" << endl;
			break;
		case Months::march:
			cout << "March" << endl;
			break;
		case Months::april:
			cout << "April" << endl;
			break;
		case Months::may:
			cout << "May" << endl;
			break;
		case Months::june:
			cout << "June" << endl;
			break;
		case Months::july:
			cout << "July" << endl;
			break;
		case Months::august:
			cout << "August" << endl;
			break;
		case Months::september:
			cout << "September" << endl;
			break;
		case Months::october:
			cout << "October" << endl;
			break;
		case Months::november:
			cout << "November" << endl;
			break;
		case Months::december:
			cout << "December" << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	} while (monthNumber != 0);

	return 0;
}