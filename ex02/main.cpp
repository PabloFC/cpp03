/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:06:38 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/09 11:06:40 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
