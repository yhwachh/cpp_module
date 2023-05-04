/*#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/

#include "Array.hpp"

int main(void)
{
	Array<std::string> str(10);
	Array<int> ints(10);
	Array<float> floats(10);
	Array<int> empt;
	
	str[0] = "Hello";
	str[1] = "World";
	str[2] = "!";
	str[9] = "42";

	ints[0] = 42;
	ints[1] = 69;
	ints[2] = 420;
	ints[9] = 6969;

	floats[0] = 3.14;
	floats[1] = 2.718;
	floats[2] = 42.42;
	floats[9] = 69.69;

	std::cout << "=============================================" << std::endl;
	std::cout << "Empty:" << std::endl;
	std::cout << "Size of Array: " << empt.size() << std::endl;
	try
	{
		std::cout << empt[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "array is empty " << e.what() << '\n';
	}
	

	std::cout << "=============================================" << std::endl;
	std::cout << "Strings:" << std::endl;
	std::cout << "Size of Array: " << str.size() << std::endl;
	std::cout << str[0] << std::endl;
	std::cout << str[1] << std::endl;
	std::cout << str[2] << std::endl;
	std::cout << str[9] << std::endl;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "Integers:" << std::endl;
	std::cout << "Size of Array: " << ints.size() << std::endl;
	std::cout << ints[0] << std::endl;
	std::cout << ints[1] << std::endl;
	std::cout << ints[2] << std::endl;
	std::cout << ints[9] << std::endl;

	std::cout << "=============================================" << std::endl;
	std::cout << "Floats:" << std::endl;
	std::cout << "Size of Array: " << floats.size() << std::endl;
	std::cout << floats[0] << std::endl;
	std::cout << floats[1] << std::endl;
	std::cout << floats[2] << std::endl;
	std::cout << floats[9] << std::endl;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "Exceptions:" << std::endl;
	try
	{
		std::cout << str[11] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index " << e.what() << '\n';
	}
	try
	{
		std::cout << ints[-5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index " << e.what() << '\n';
	}
	try
	{
		std::cout << floats[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "test with out of scope index " << e.what() << '\n';
	}
	
}