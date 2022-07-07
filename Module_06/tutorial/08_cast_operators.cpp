#include <iostream>

class Foo {

	private:
		float _v;
	public:
		Foo (float const v) : _v(v) {}
		float	getV(void) {return this->_v;}
		operator float () {return this->_v;}
		int	int_conv() {return static_cast<int>(this->_v);}
};

int	main(void)
{
	Foo a = 420.123f;
	float b = a;
	// int c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << a.int_conv() << std::endl;

	return 0;
}