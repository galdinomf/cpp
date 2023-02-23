#include <iostream>
#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

// int	main( void )
// {
// 	// Weapon	w("club");
// 	// HumanA	hA("Bob", w);

// 	// std::cout << hA.weapon.getType() << std::endl;
// 	// w.setType("sowrd");
// 	// std::cout << hA.name << std::endl;
// 	// std::cout << hA.weapon.getType() << std::endl;
// 	// hA.attack();
// 	// return 0;

// }


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		jim.weapon = NULL;
		jim.attack();
	}
	return 0;
}