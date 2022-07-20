// Define pointer as other pointer
#include <iostream>

int main()
{
	int Numero{ 4598 };
	int *ptr;
	int *ptr2;
	ptr = &Numero;
	ptr2 = ptr;
	std::cout << "\nAddress inside Pointer 1: " << ptr << "\n";
	std::cout << "\nAddress inside Pointer 2: " << ptr2 << "\n";
	std::cout << "\nPointer 1 address in RAM memory: " << &ptr << "\n";
	std::cout << "\nPointer 2 adress in RAM memory: " << &ptr2 << "\n";
	std::cout << "\nNumber's Value: " << Numero << "\n";
	*ptr2 = *ptr + 12;
	std::cout << "\nCurrent Number's value after updating the pointers: " << Numero << "\n";
	system("PAUSE");
	return 0;
}