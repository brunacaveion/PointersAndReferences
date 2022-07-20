#include <iostream>

int main()
{
	int Number = 11;
	double Salary = 3324.12;
	std::cout << "\n Size of 'Number' variable: " << sizeof(Number)<<" Bytes\n";
	std::cout << "\n Size of 'Salary' variable: " << sizeof(Salary) << " Bytes\n";
	std::cout << "\n Memory adress of 'Number': " << &Number << "\n"; // Random adress
	std::cout << "\n Memory adress of 'Salary': " << &Salary << "\n";
	/* The adress of a variable is the adress of it's first byte, no matter the variable's type!*/
	system("PAUSE");
	return 0;

}
