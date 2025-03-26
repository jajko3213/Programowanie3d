#include <iostream>
#include <fstream>
#include <vector>
#include <string>

bool isPrime(int number)
{
	if (number < 2)
		return false;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int reversedNumber(int number)
{
	int reversed = 0;
	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number = number / 10;
	}

	return reversed;
}

int main()
{
	//Zadanie pierwsze (na liczb)
	setlocale(LC_CTYPE, "Polish");
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;
	int number;

	while (file >> number)
	{
		numbers.push_back(number);
	}

	for (int num : numbers)
	{
		if (reversedNumber(num) % 17 == 0)
		{
			std::cout << reversedNumber(num) << "\n";
		}
	}

	//Zadanie drugie
	int maxDifference = 0;  
	int highest = 0;  
	int reversedNum;

	for (int num : numbers)
	{
		reversedNum = reversedNumber(num);  
		int difference = abs(num - reversedNum);  

		if (difference > maxDifference)
		{
			maxDifference = difference;  
			highest = num;  
		}
	}
	
	std::cout << highest << " " << maxDifference << "\n";

	//Zadanie trzecie
	for (int num : numbers)
	{
		int reversedNum = reversedNumber(num);
		if (isPrime(num) && isPrime(reversedNum))
		{
			std::cout << num << "\n";
		}
	}

	//Zadanie czwarte
	for (int num : numbers)
	{
		
	}
}