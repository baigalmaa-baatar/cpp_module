
class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};

int main(void)
{
    Child1  a;

    Parent * b = &a;
    Parent * c = (Parent *)&a;

    Parent * d = &a;
    Child1 * e = d;             //Hello no!
    Child2 * f = (Child2 *) d;  //Hmm, okay, but still

    return 0;
}