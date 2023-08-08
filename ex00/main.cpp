/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:41:25 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/15 17:01:14 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
    std::cout << "------ Animal ------\n" << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "dog Type: " << dog->getType() << " " << std::endl;
    std::cout << "cat Type: " << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();

    delete  dog;
    delete  cat;

    std::cout << std::endl << "------ Wrong Animal ------\n" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}
