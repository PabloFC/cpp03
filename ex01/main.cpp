#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Jack");

    a.attack("Bandit");
    a.takeDamage(30);
    a.beRepaired(20);
    a.guardGate();

    return 0;
}
