#include "Array.hpp"


int main(void)
{
	std::cout << "Creating array with size 4242" << std::endl;
	Array<int> myArray(4242);
	std::cout << "Creating empty array" << std::endl;
	Array<int> emptyArray;
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
	
}