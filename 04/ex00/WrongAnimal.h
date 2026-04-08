//
// Created by eyza on 09/07/24.
//

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const &rhs);

        void makeSound() const;
        std::string getType() const;

    protected:
        std::string m_type;
};

#endif //WRONGANIMAL_H
