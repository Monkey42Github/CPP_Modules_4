/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:58:56 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:57 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << "\n" << std::endl;
    delete j;
    delete i;
    std::cout << "\n" << std::endl;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
    {
        std::cout << "\n" << std::endl;
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}
