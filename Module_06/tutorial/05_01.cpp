class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};

class Unrelated {};


int main(void)
{
    Child1  a;

    Parent * b = &a;
    Child1 * c = b;                          //Hello no!
    Child2 * d = static_cast <Child2 *>(b);  //Hmm, okay, but still

    Unrelated * e = static_cast <Unrelated *>(&a);  //Explicit conversion: No!

    return 0;
}