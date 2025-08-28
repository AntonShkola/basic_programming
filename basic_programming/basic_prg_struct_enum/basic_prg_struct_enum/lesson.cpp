#include<iostream>

using namespace std;

enum class Status { offline, online, maintenance };

// структура
struct Person
{

	// члены структуры (поля, атрибуты)
	string name;
	int age;

	Person(string setName, int setAge) : name{setName}, age{setAge}
	{ }

	// метод - функция внутри структуры или класса (функция-член)
	void printData()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

int main()
{

	Person person1{"Anton",31};
	person1.printData();
	


	// enum class
	Status serverStatus{ static_cast<Status>(1) };

	switch (serverStatus)
	{
	case Status::offline:
		cout << "server is offline" << endl; 
		break;
	case Status::online:
		cout << "server is online" << endl;
		break;
	case Status::maintenance:
		cout << "server is under maintenance" << endl;
		break;
	default:
		cout << "error" << endl;
		break;
	}

	return 0;
}