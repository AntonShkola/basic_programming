#include <iostream>

using namespace std;

class Person
{
private:
	// члены класса (поля, атрибуты)
	string name;
	int age;

public:

	// конструктор
	Person(string setName, int setAge) : name{ setName }, age{ setAge }
	{

	}

	// методы класса (функци-члены)

	void setName(string setName) { name = setName; }
	string getName() { return name; }

	void setAge(int setAge) { age = setAge; }
	int getAge() { return age; }

	void printData()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

int main()
{
	int newAge{ 33 };

	Person person1("Anton", 31);
	person1.setAge(newAge);
	person1.printData();
	

	cout << endl;

	Person person2("Olga", 58);
	person2.printData();

	return 0;
}