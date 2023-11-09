//Shane Moran
//9/11/23
//even
#include<iostream>

int main()
{
	//Declare variables
	int number = 0;
	std::cout << "Please enter your number - ";
	std::cin >> number;

	if (number % 2 == 1)
	{
		std::cout << "Your number is odd" << std::endl;
	}
	return 0;
}