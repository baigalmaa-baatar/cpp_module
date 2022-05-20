#include <iostream>

using namespace std;

int main()
{
    string color, pluralNouns, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNouns);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNouns << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}