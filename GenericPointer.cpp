// Defining void pointer and how to read it
#include <iostream>
int main()
{
	int Numero{ 1276 };
	char Letra{ 'B' };
	void *ptrG; //Void pointer is used when we don't know what value type it will recieve 
	ptrG = &Letra;
	std::cout << "Letter's value through the pointer: " << *(char*)ptrG<<"\n";/* *(char*) is used when the pointer is defined with void, it says to the compiler how to read it. In this case it is a char but we must change if it is int, float, etc as follows: */
	ptrG = &Numero;
	std::cout << "Integer's value through the pointer: " << *(int*)ptrG << "\n";
	return 0;
}