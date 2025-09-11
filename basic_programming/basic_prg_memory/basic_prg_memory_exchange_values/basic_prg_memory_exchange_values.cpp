#include <iostream>

using namespace std;

int swap(int& a, int& b)
{

	int bufer = a;
	a = b;
	b = bufer;
	

	return 0;
}

int main(int argc, char** argv)
{

	int a = 5;
	int	b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;


	return 0;
}

