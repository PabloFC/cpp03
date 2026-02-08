#include "FragTrap.hpp"

int main()
{
    FragTrap a("Fraggy");

    a.attack("Target");
    a.takeDamage(40);
    a.beRepaired(10);
    a.highFivesGuys();

    return 0;
}
