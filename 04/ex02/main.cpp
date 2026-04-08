//
// Created by eyza on 09/07/24.
//
#include "AAnimal.h"
#include "Dog.h"
#include "Cat.h"
#include "Brain.h"


int main()
{
	AAnimal *cat = new Cat();
	cat->makeSound();
	//const A_Animal zou = new A_Animal();
	AAnimal *zou = new Dog();
	zou->makeSound();
	delete cat;
	delete zou;

}
