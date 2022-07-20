// Comparison between pointers, adresses, and variable values 

// ptr is an address, *ptr is the value it holds
#include <iostream>

int main()
{
	int Numero{ 100 };
	
	//int *ptr; // Stores a random memory before define it (memory garbage) 
	int *ptr = &Numero;// It is the same as int *ptr and *ptr=&Numero
	std::cout << "\nNumber's value: " << Numero << "\n";
	std::cout << "\nPointer's value: " << ptr << "\n";
	std::cout << "\nNumber's address: " << &Numero << "\n";
	std::cout << "\nPointer's adress in RAM memory: " << &ptr << "\n";
	std::cout << "\nValue the pointer holds: " << *ptr << "\n";
	*ptr = 320;
	std::cout << "\nValue the pointer holds after changing it: " << *ptr << "\n";

	system("PAUSE");
	return 0;
}