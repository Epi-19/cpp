//
// Created by eyza on 09/07/24.
//

#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog const &operator=(Dog const &rhs);

		virtual std::string const &getType() const;
		void setType(std::string const &type);
		void getIdeas() const;
		void setIdea(std::string idea, int i);

		virtual void makeSound() const;

	private:
		Brain *m_brain;
};

#endif //DOG_H
