#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

    try 
    {
        Bureaucrat bureaucrat("A",11);
        Form form("B", 10, 10);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
