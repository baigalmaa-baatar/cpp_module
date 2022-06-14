#include <iostream>

class Box {
    private:
        int length;
        int breadth;
        int height;
    public:
        void set_values (int a, int b, int c) {
            length = a;
            breadth = b;
            height = c;
        }
        void show_data () {
            std::cout << "length: " << length << std::endl;
            std::cout << "breadth: " << breadth << std::endl;
            std::cout << "height: " << height << std::endl;
        }
};

int main ()
{
    Box B1, B3;

    B1.set_values (5, 10, 15);
    B1.show_data();

    std::cout << "----------------------" << std::endl;

    Box B2 = B1;
    B2.show_data ();

    std::cout << "----------------------" << std::endl;

    B3 = B1;
    B3.show_data ();

    return 0;
}