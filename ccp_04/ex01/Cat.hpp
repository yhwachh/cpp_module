#ifndef CAT_HPP
    #define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat & tp);
        virtual ~Cat();
        Cat &operator=(Cat & tp);
        std::string gettype(void);
        virtual void makesound(void);

    private:
        Brain* brain;

};

#endif