/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:58:34 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:35 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal " << this->_type << " constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if ( this != &rhs )
    {
        this->_type = rhs._type;
    }
    return *this;
}

void AAnimal::makeSound(void) const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return this->_type;
}