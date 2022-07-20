// Reference of a Number.
/* Number and Ref have the same memory address, Ref doesnt have its own memory address. We call "Numero" as "Ref" like a short cut*/
#include <iostream>
int main()
{
	int Numero{ 1034 };
	char Letra{ 'B' };
	int &Ref = Numero;
	std::cout << "Value of numbrer using reference: " << Ref << "\n";
	std::cout << "\nNumber's address: " << &Numero << "\n";
	std::cout << "\nRef's address: " << &Ref << "\n";
	int* ptr = &Numero;
	std::cout << "\nPointer's address in RAM: " << &ptr << "\n";
	std::cout << "\nNumber's value with pointer: " << *ptr << "\n";
	std::cout << "\nPointer's value address in RAM: " << ptr << "\n";



	system("PAUSE");
	return 0;
}