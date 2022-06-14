#include <iostream>

class Box {
    private:
        int length;
        int * breadth;
        int height;
    public:
        Box () {
            breadth = new int;
        }
        Box (Box &obj) {
            length = obj.length;
            breadth = new int;
            * breadth = * (obj.breadth);
            height = obj.height;
        }

        void set_values (int a, int b, int c) {
            length = a;
            * breadth = b;
            height = c;
        }
        void show_data () {
            std::cout << "length: " << length << std::endl;
            std::cout << "breadth: " << breadth << std::endl;
            std::cout << "height: " << height << std::endl;
        }
        ~Box () {
            delete breadth;
        }
};

int main ()
{
    Box B1;

    B1.set_values (5, 10, 15);
    B1.show_data();

    std::cout << "----------------------" << std::endl;

    Box B2 = B1;
    B2.show_data ();

    std::cout << "----------------------" << std::endl;

    return 0;
}