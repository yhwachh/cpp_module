#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t t;

	t = reinterpret_cast<std::uintptr_t>(ptr);
	return (t);
}

Data* deserialize(uintptr_t raw)
{
	Data *data;

	data = reinterpret_cast<Data *>(raw);
	return (data);
}

int	main() 
{

	Data	data;

	data._name = "ibra";
    data._sexe = "homme";

	std::cout << "before serializaation: " << &data._name << std::endl;
    std::cout << "before serializaation: " << &data._sexe << std::endl;

	uintptr_t	seria = serialize(&data);
	Data*		deseria = deserialize(seria);

	std::cout << "after serializaation:  " << &deseria->_name << std::endl;
    std::cout << "after serializaation:  " << &deseria->_sexe << std::endl;
}