/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:42:09 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:22:19 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string _type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );
        Animal( const Animal& src );
        Animal& operator=( const Animal& rhs );

        virtual void    makeSound( void ) const;
        std::string getType( void ) const; 
};

#endif