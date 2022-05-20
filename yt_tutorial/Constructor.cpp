#include <iostream>

using namespace std;

class  Book {
    public:
        string  title;
        string  author;
        int  pages;
        Book(string name){
            cout << "Creating "<< name << endl;
        }
        ~Book(){
            cout << "Deleting Object" << endl;
        }
};

int main()
{
    Book    book1("Harry Poter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book    book2("LOTR");
    book2.title = "Lord of the rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    cout << book1.title;
    cout << book1.author;
    cout << book1.pages << endl;

    cout << book2.title;
    cout << book2.author;
    cout << book2.pages << endl;

    return 0;
}