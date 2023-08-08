/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:29:04 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/14 15:29:05 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    try 
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& error)
    {
        std::cout << "Allocation failed" << error.what() << std::endl;
    }
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "ouaf !" << std::endl;
}

Dog::Dog(const Dog& src)
{
    *this = src;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog copy called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain =new Brain(*src._brain);
    }
    return *this;
}
