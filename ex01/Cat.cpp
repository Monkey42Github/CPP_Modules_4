/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:28:57 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/14 15:28:58 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
    try
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& error)
    {
        std::cout << "Allocation faled :" << error.what() << std::endl;
    }
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound(void ) const
{
    std::cout << "Miaou !" << std::endl;
}

Cat::Cat (const Cat& src)
{
    *this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat copy called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain);
    }
    return *this;
}