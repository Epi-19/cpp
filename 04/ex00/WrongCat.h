#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <string>
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    virtual ~WrongCat();
    WrongCat& operator=(WrongCat const &rhs);

    virtual void makeSound() const;

protected:


};




#endif //WRONGCAT_H
