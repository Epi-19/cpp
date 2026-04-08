//
// Created by eyza on 09/07/24.
//

#ifndef CAT_H
#define CAT_H

#include <string>
#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal {

    public:
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat const &operator=(Cat const &rhs);

		virtual std::string const &getType() const;
		void setType(std::string const &type);
		void getIdeas() const;
		void setIdea(std::string idea, int i);

        virtual void makeSound() const;

    private:
		Brain *m_brain;
};


#endif //CAT_H
