#include "RPN.hpp"

int main(int ac, char **av) 
{
    RPN rpn;
    if(ac != 2)
    {
        std::cout << "./RPN arg" << std::endl;
        return(1);
    }

    float result  = rpn.evaluateExpression(av[1]);

    std::cout << result << std::endl;
    
    return 0;
}
