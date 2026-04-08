//
// Created by eyza on 09/07/24.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {

    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal const &operator=(Animal const &rhs);

        virtual void makeSound() const;
        virtual std::string const &getType() const;

    protected:
        std::string m_type;
};




#endif //ANIMAL_H
