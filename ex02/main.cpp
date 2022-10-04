#include "Array.hpp"

int main(void)
{
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Creating array with size 4242" << std::endl;
	Array<int> myArray(4242);
	std::cout << "Creating empty array" << std::endl;
	Array<int> emptyArray;
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Creating an array on the stack" << std::endl;
	Array<int> *stackArray = new Array<int>();
	Array<int> *stackArray2 = new Array<int>();
	*stackArray = *stackArray2;
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Accessing the size of both arrays:" << std::endl;
	try
	{
		std::cout << "size: " << myArray.getSize() << std::endl;
		std::cout << "size: " << emptyArray.getSize() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Accessing both arrays:" << std::endl;
	try
	{
		std::cout << "myArray[0]: " << myArray[0] << std::endl;
		std::cout << "emptyArray[0]: " << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Assigning random numbers to array" << std::endl;
	srand(time(NULL));
	try
	{
		for (int i = 0; i < 10; i++)
		{
			const int value = rand() % 100;
			myArray[i] = value;
			std::cout << "myArray[0]: " << myArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Accessing index out of bounds" << std::endl;
	try
	{
		std::cout << "myArray[4241]: " << myArray[4241] << std::endl;
		std::cout <<  "myArray[4242]: " << myArray[4242] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Deleting an array" << std::endl;
	delete stackArray;
	delete stackArray2;
}
