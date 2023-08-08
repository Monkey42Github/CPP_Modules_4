/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:21:25 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:34:18 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal( void );
        AAnimal( std::string type );
        virtual ~AAnimal( void );
        AAnimal( const AAnimal& src );
        AAnimal& operator=( const AAnimal& rhs );

        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const; 
};

#endif