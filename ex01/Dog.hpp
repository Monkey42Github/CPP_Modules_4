/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:29:07 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 15:49:37 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;

    public:
        Dog(void);
        Dog(const Dog& src);
        ~Dog(void);
        Dog& operator=(const Dog& src);

        void makeSound(void) const;
};

#endif