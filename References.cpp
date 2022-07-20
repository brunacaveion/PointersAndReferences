// A function to change numbers of place. It is possible to do it with pointers 
#include <iostream>

void TrocaNumeros(int &Numero1, int &Numero2);

int main()
{
	int Numero1, Numero2;
	std::cout << "Write the first number: " << "\n";
	std::cin >> Numero1;
	std::cout << "Write the second number: " << "\n";
	std::cin >> Numero2;
	std::cout << "Values before the change: \n";
	std::cout << "First number: \n" << Numero1;
	std::cout << "\nSecond number: \n" << Numero2;
	std::cout << "\nValues after the change: \n";
	TrocaNumeros(Numero1, Numero2);
	std::cout << "First number: \n" << Numero1;
	std::cout << "\nSecond number: \n" << Numero2<<"\n";
	std::cout << "First number's address: \n" << &Numero1;
	std::cout << "\nSecond number's address: \n" << &Numero2 << "\n";
	system("PAUSE");
	return 0;
}

void TrocaNumeros(int &Numero1, int &Numero2)
{
	std::cout << "First number's address: \n" << &Numero1;
	std::cout << "\nSecond number's address: \n" << &Numero2 << "\n";
	// We need a tamporary place to store Numero1 before the change
	int Temp{ Numero1 };
	Numero1 = Numero2;
	Numero2 = Temp;

}
