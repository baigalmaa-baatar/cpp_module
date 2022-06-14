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
    std::cout << "This is Character : Hello " << target << " !" << std::endl;
}

void    Warrior::sayHello (std::string const & target) {
    std::cout << "This is Warrior : Fuck off " << target << " !" << std::endl;
}

int main ()
{
    Warrior * w = new Warrior();
    Character * c = new Warrior();

    w->sayHello("aaa");
    c->sayHello("aaa");

    return 0;
}