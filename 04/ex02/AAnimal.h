//
// Created by eyza on 09/07/24.
//

#ifndef AANIMAL_H
#define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal {

    public:
        AAnimal();
        AAnimal(const AAnimal &copy);
        virtual ~AAnimal();
        AAnimal const &operator=(AAnimal const &rhs);

        virtual void makeSound() const;
        virtual std::string const &getType() const;

    protected:
        std::string m_type;
};




#endif //AANIMAL_H
