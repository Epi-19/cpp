#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog const &operator=(Dog const &rhs);

		virtual std::string const &getType() const;
		void setType(std::string const &type);
		virtual void makeSound() const;

	protected:

};



#endif //DOG_H
