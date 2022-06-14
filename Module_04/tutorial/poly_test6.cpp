#include <iostream>
#include <string>

class Character {
    public:
        void    sayHello(std::string const & target);
};

class Warrior : public Character{
    public:
        void    sayHello(std::string const & target);
};

void    Character::sayHello (std::string const & target) {
    std::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::sayHello (std::string const & target) {
    std::cout << "Fuck off " << target << " !" << std::endl;
}

int main ()
{
    Character * c = new Warrior();
    Warrior * w = new Warrior();

    w->sayHello("aaa");
    c->sayHello("aaa");

    return 0;
}