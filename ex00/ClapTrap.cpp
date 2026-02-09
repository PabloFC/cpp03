/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:54:48 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/05 12:54:48 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Default constructor: initializes a ClapTrap with default values
ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

// Parameterized constructor: initializes a ClapTrap with a specific name
ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    // Initialize properties with specific name and default values
    std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

// Copy constructor: creates a new ClapTrap by copying another one
ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

// Assignment operator: copies attributes from another ClapTrap to the current one
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

// Destructor: releases resources and displays destruction message
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

// Attacks a target, consuming 1 energy point and causing damage
void ClapTrap::attack(const std::string &target)
{
    // Attack only if alive and has energy; consumes 1 energy point
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name
                  << " can't attack (no hit points or energy left)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage
              << " points of damage!" << std::endl;
}

// Takes damage, reducing hit points (without going below zero)
void ClapTrap::takeDamage(unsigned int amount)
{
    // Reduce hit points without going below zero
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes "
              << amount << " points of damage!" << std::endl;
}

// Repairs itself, restoring hit points and consuming 1 energy point
void ClapTrap::beRepaired(unsigned int amount)
{
    // Restore hit points if alive and has energy; consumes 1 energy point
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name
                  << " can't be repaired (no hit points or energy left)" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for "
              << amount << " hit points!" << std::endl;
}
