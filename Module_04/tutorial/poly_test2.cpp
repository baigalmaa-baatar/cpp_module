#include <iostream>

class Test {
    public:
        int a;
        int *p;

    public:
        Test(int x) {
            a = x;
            p = new int[a];
        }
        Test(Test &obj) {
            a = obj.a;
            p = obj.p;
        }
        
};

int main()
{
    Test t(5);
    t.p[0] = 1;
    Test t2(t);

    std::cout << "t.a: " << t.a << " t.p[0]: " << t.p[0] <<  std::endl;
    std::cout << "t2.a: " << t2.a << " t2.p[0]: " << t2.p[0] <<  std::endl;
    
    t.p[0] = 2;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << "t.a: " << t.a << " t.p[0]: " << t.p[0] <<  std::endl;
    std::cout << "t2.a: " << t2.a << " t2.p[0]: " << t2.p[0] <<  std::endl;

    return 0;
}