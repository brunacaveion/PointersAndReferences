// Difference between pointers and References

// Reference is not variable, it is just a new label for a given variable
// Pointer is a variable
// Reference shares the same memory address as the number refered to it
#include <iostream>
int main()
{
	int Numero{ 1289 };
	int Numero2{ 2376 };
	int &RefNum = { Numero2 }; /*Reference requires being initiating, we cannot name it without a value. Pointer can be given without initiating (memory trash is allowed for pointers)*/
	RefNum = 5677;/*We can give other value to Reference by directly giving other value, which gives an error with pointers. Although I cannot do &RefNum=Numero after naming it as Numero2, which is possible with pointers*/
	
	int* ptr = &Numero;
	*ptr = 4047;
	std::cout << "Number's value: " << *ptr << "\n";
	// With a pointer we can make it to point to other value, which is not possible with Ref
	ptr = &Numero2;
	*ptr = Numero + 100;
	std::cout << "Number's value: " << *ptr << "\n";

	return 0;
}