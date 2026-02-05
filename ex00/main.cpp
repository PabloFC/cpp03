/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:55 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/05 12:55:55 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // Create two instances of ClapTrap
    ClapTrap a("Jack");
    ClapTrap b("Zero");

    // Demonstate interaction between instances
    a.attack("Zero");
    b.takeDamage(3);

    b.attack("Jack");
    a.takeDamage(5);

    // Demonstrate repair functionality
    a.beRepaired(4);
    b.beRepaired(2);

    return 0;
}
