#include <iostream>
#include <string>
#include <iomanip>


int main(void)
{
    std::string string = "HI THIS IS BRAIN";

    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "string adresse: "<< &string << " / stringPTR adresse: " << stringPTR << " / stringREF adresse: " << &stringREF << std::endl;

    std::cout << "string valeur: "<<string << " / stringPTR valeur: " << *stringPTR << " / stringREF valeur: " << stringREF << std::endl;


    return (0);
}