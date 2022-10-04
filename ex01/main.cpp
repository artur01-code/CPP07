#include "Array.hpp"

#ifndef INT_MIN
# define INT_MIN -2147483648
#endif
#ifndef INT_MAX
# define INT_MAX 2147483647
#endif
#ifndef LONG_MIN
# define LONG_MIN -2147483647
#endif
#ifndef LONG_MAX
# define LONG_MAX 2147483647
#endif

int main()
{
	int			int_array[5] = {12, -21, 42, INT_MIN, INT_MAX};
	long		long_array[5] = {1337, 1828483, -42, LONG_MIN, LONG_MAX};
	float		float_array[5] = {42.42, 7.52, 15.56, 0.0, -8280};
	char		char_array[9] = {'A', 'G', 'Z', ')', '=', '4', '!', 'p', '?'};
	std::string	string_array[5] = {"Hello", "World", "!", "42", "name"};

	std::cout << std::string(10, '-') << "Testing with int array." << std::string(10, '-') << std::endl;
	std::cout << "total result of size of: " << sizeof(int_array) << " size of first element: " << sizeof(int_array[0]) << std::endl;
	::iter(int_array, sizeof(int_array) / sizeof(int_array[0]), &test_print);
	std::cout << std::endl;
	::iter(int_array, sizeof(int_array) / sizeof(int_array[0]), &test_increment);
	::iter(int_array, sizeof(int_array) / sizeof(int_array[0]), &test_print);
	std::cout << std::endl << std::endl;

	std::cout << std::string(10, '-') << "Testing with long array." << std::string(10, '-') << std::endl;
	std::cout << "total result of size of: " << sizeof(long_array) << " size of first element: " << sizeof(long_array[0]) << std::endl;
	::iter(long_array, sizeof(long_array) / sizeof(long_array[0]), &test_print);
	std::cout << std::endl;
	::iter(long_array, sizeof(long_array) / sizeof(long_array[0]), &test_increment);
	::iter(long_array, sizeof(long_array) / sizeof(long_array[0]), &test_print);
	std::cout << std::endl << std::endl;

	std::cout << std::string(10, '-') << "Testing with float array." << std::string(10, '-') << std::endl;
	std::cout << "total result of size of: " << sizeof(float_array) << " size of first element: " << sizeof(float_array[0]) << std::endl;
	::iter(float_array, sizeof(float_array) / sizeof(float_array[0]), &test_print);
	std::cout << std::endl;
	::iter(float_array, sizeof(float_array) / sizeof(float_array[0]), &test_increment);
	::iter(float_array, sizeof(float_array) / sizeof(float_array[0]), &test_print);
	std::cout << std::endl << std::endl;

	std::cout << std::string(10, '-') << "Testing with char array." << std::string(10, '-') << std::endl;
	std::cout << "total result of size of: " << sizeof(char_array) << " size of first element: " << sizeof(char_array[0]) << std::endl;
	::iter(char_array, sizeof(char_array) / sizeof(char_array[0]), &test_print);
	std::cout << std::endl;
	::iter(char_array, sizeof(char_array) / sizeof(char_array[0]), &test_increment);
	::iter(char_array, sizeof(char_array) / sizeof(char_array[0]), &test_print);
	std::cout << std::endl << std::endl;

	std::cout << std::string(10, '-') << "Testing with string array." << std::string(10, '-') << std::endl;
	std::cout << "total result of size of: " << sizeof(string_array) << " size of first element: " << sizeof(string_array[0]) << std::endl;
	::iter(string_array, sizeof(string_array) / sizeof(string_array[0]), &test_print);
	std::cout << std::endl;
	::iter(string_array, sizeof(string_array) / sizeof(string_array[0]), &test_print);
	std::cout << std::endl << std::endl;
	return (0);
}
