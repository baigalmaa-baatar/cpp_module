#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;
    public:
        Student(std::string const & login) : _login(login)
        {

        }
        std::string&    getLoginRef()
        {
            return  this->_login;
        }
        std::string const & getLoginRefConst() const
        {
            return  this->_login;
        }

}

void    byPtr(std::string* str)
{
    *str += " and ponies";
}

void    byConstPtr(std::string const * str)
{
    std::cout << *str << std::endl;
}

void    byRef(std::string& str)
{
    str += " and ponies";
}

void    byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main(void)
{
    std::string str = "i like butterflies";
    std::cout << str << std::endl;
    
    byPtr(&str);
    byConstPtr(&str);

    str = "i like otters";
    std::cout << str << std::endl;

    byRef(str);
    byConstRef(str);

    return 0;
}