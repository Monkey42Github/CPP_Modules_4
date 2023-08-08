/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:42:12 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/14 14:42:17 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destuctor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string     Animal::getType(void) const
{
    return this->_type;
}