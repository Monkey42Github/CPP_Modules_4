/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:29:10 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 16:56:53 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << "\n" << std::endl;
    delete dog;
    delete cat;
    std::cout << "\n\n" << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
    {
        std::cout << "\n" << std::endl;
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}
