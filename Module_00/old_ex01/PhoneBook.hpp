#ifndef TEST_H
# define TEST_H

# include <iostream>

class PhoneBook
{
    public:
        std::string contacts[5][8]; // = {"firstName", "lastName", "nickname", "phoneNumber", "darkestSecret"};

        PhoneBook();
        ~PhoneBook();

        // void    add(void);
        void    search(void);
    private:
        Contact contacts;
};

#endif