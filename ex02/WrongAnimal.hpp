/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:59:03 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:59:06 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected :
        std::string _type;

    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        ~WrongAnimal( void );

        WrongAnimal( const WrongAnimal& src );
        WrongAnimal& operator=( const WrongAnimal& rhs );

        void            makeSound( void ) const;
        std::string     getType( void ) const; 
};

#endif