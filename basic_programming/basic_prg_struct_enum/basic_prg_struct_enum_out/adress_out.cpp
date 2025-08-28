#include <iostream>
#include <string>

using namespace std;

struct Address
{
	string city;
	string street;
	int houseNumber;
	int apartmentNumber;
	int postalCode;
};

void printAddress(const Address& addr)
{
	cout << "City: " << addr.city << endl;
	cout << "Street: " << addr.street << endl;
	cout << "House number: " << addr.houseNumber << endl;
	cout << "Apartment number: " << addr.apartmentNumber << endl;
	cout << "Postal code: " << addr.postalCode << endl;
}

int main()
{
	Address address1;
	address1.city = "Gelendzhik";
	address1.street = "Pervomayskaya";
	address1.houseNumber = 5;
	address1.apartmentNumber = 57;
	address1.postalCode = 3344665;

	Address address2;
	address2.city = "Krasnodar";
	address2.street = "Krasnaya";
	address2.houseNumber = 78;
	address2.apartmentNumber = 12;
	address2.postalCode = 4508004;

	printAddress(address1);
	cout << endl;
	printAddress(address2);

	return 0;
}