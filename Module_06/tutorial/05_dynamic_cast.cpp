#include <iostream>
// #include <typeinfo>
// #include <exception>

class Parent {
	public : virtual ~Parent (void) {};
};
class Child1 : public Parent {};
class Child2 : public Parent {};

int	main(void){
	Child1 a;
	Parent * b = &a;

	Child1 * c = dynamic_cast < Child1 *> (b);

	if (c == NULL){
		std::cout << "Conversion is not OKAY" << std::endl;
	}
	else{
		std::cout << "Conversion is OKAY" << std::endl;
	}

	try {
		Child2 * d = dynamic_cast <Child2 *> (b);
		std::cout << "Conversion is OKAY" << std::endl;
	}
	catch (std::bad_cast &bc){
		std::cout << "Conversion is not OKAY\t" << bc.what() << std::endl;
	}

	return 0;
}