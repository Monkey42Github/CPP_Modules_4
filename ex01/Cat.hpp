/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:29:01 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 15:50:43 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;

    public:
        Cat(void);
        Cat(const Cat& src);
        ~Cat(void);
        Cat& operator=(const Cat& src);

        void makeSound(void) const;
};

#endif