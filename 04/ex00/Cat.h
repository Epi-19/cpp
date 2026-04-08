#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"

class Cat : public Animal {

    public:
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat const &operator=(Cat const &rhs);

        virtual std::string const &getType() const;
        void setType(std::string const &type);
        virtual void makeSound() const;

	protected:

};



#endif //CAT_H
