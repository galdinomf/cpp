#include <iostream>
#include "Serializer.hpp"

int	main( void )
{
	t_Data new_data;
	new_data.s = "banana";
	new_data.i = 42;
	new_data.f = 42.0f;

	std::cout << "Serializing address of new_data:" << std::endl;
	uintptr_t u = Serializer::serialize(&new_data);
	std::cout << "u = " << u << std::endl;

	std::cout << "Comparing address of new_data with deserialized u:" << std::endl;
	std::cout << "deserialized u = " << Serializer::deserialize(u) << std::endl;
	std::cout << "&new_data = " << &new_data << std::endl;

	std::cout << "Using deserialized u to access new_data members:" << std::endl;
	std::cout << "new_data.i = " <<  Serializer::deserialize(u)->i << std::endl;
	std::cout << "new_data.f = " <<  Serializer::deserialize(u)->f << std::endl;
	std::cout << "new_data.s = " <<  Serializer::deserialize(u)->s << std::endl;
	return 0;
}