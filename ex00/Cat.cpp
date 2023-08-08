/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:42:06 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/14 14:42:07 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
} 

Cat::~Cat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miaou !" << std::endl;
}
