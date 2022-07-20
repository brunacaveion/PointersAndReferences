// Our goal is to define a number as a pointer
/* The pointer has an adress but it doesn't mean we cannot setup the pointer to store other adress, those two adresses are not the same thing*/
#include <iostream>

int main()
{
	int *ptr; //*nome defines a pointer called nome. It is important to inicialize the pointer
	int Numero = 190;
	ptr = &Numero;
	*ptr = 104; // It changes the Number's value
	std::cout << "\nNumber's address: " << &Numero; // Number's address
	std::cout << "\nNumber: " << Numero;
	std::cout << "\nPointer's address: " << &ptr; // Is not the same as Number's address 
	std::cout << "\nPointer: " << ptr<<"\n"; // Holds Number's adress
	std::cout << "\n*Pointer: " << *ptr << "\n"; // Holds the new value of Number

	system("PAUSE");
	return 0;

}