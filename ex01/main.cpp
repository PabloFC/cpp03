/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:07:31 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/09 11:07:33 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
