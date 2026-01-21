#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Jack");
    ClapTrap b("Zero");

    a.attack("Zero");
    b.takeDamage(3);

    b.attack("Jack");
    a.takeDamage(5);

    a.beRepaired(4);
    b.beRepaired(2);

    return 0;
}
