//
// Created by eyza on 09/07/24.
//
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Brain.h"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
	
	std::cout << "Other testing" << std::endl;

	const Animal *animal_array[4];

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	std::cout << "Other testing testing deep copy" << std::endl;

	std::cout << std::endl;
	Dog *a = new Dog();

	a->setIdea("Happy", 1);
	a->setIdea("Sad", 2);
	a->setIdea("Joy", 3);
	a->setIdea("Dead", 4);

	std::cout << "The " << a->getType() << " has the following ideas" << std::endl;
	a->getIdeas();
	std::cout << std::endl;
	std::cout << "Construction of Dog *b = new Dog(*a): " << std::endl;
	std::cout << std::endl;
	Dog *b = new Dog(*a);
	std::cout << std::endl;
	std::cout << "Test copy assignment to see if deep copy:" << std::endl;
	std::cout << "The " << b->getType() << " has the following ideas" << std::endl;
	b->setIdea("will do pipi", 5);
	b->getIdeas();
	std::cout << "and the new tdea is not present in brain of a below:" << std::endl;
	std::cout << std::endl;
	b->setIdea("kikoo je ne suis pas print dans a", 7);
	std::cout << std::endl;
	a->getIdeas();
	std::cout << std::endl;
	b->getIdeas();
	delete b;
	delete a;
	
	return 0;
}
