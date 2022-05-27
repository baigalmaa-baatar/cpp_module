#include <iostream>

using namespace std;

class  Book {
    public:
        string  title;
        string  author;
        int  pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
        ~Book(){
            cout << "Deleting Object" << endl;
        }
};

int main()
{
    Book    book1("Harry Potter", "JK Rowling", 500);
    Book    book2("Lord of the rings", "Tolkien", 700);
    Book    book3;

    cout << book3.title << endl;
    
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}