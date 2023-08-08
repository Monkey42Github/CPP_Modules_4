/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:58:47 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:48 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"AAnimal.hpp"

class Cat : public AAnimal
{
    private:
        Brain *_brain;

    public:
        Cat(void);
        ~Cat(void);
        Cat(const Cat& src);
        Cat& operator=(const Cat& src);

        void makeSound(void) const;
};


#endif