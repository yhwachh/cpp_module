#include "RPN.hpp"

int main(int ac, char **av) 
{
    (void) ac;
    RPN rpn;

    float result  = rpn.evaluateExpression(av[1]);

    std::cout << "result :" << result << std::endl;


    
    return 0;
}
