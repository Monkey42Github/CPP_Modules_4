/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:58:38 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:39 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor created" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain copy called" << std::endl;
    if(this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}
