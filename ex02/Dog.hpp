/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:58:53 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:54 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_brain;

    public:
        Dog(void);
        ~Dog(void);

        Dog(const Dog& src);
        Dog& operator=(const Dog& src);

        void makeSound(void) const;
};

#endif