#include <exception>
#include <iostream>

class Overspeed : public std::exception {        //own written xception class 
    private:
        int _speed;
    public:
        const char* whatever() const {
            return "Check your speed, this is a car not a airplane";
        }
        void    getSpeed(void) {
            std::cout << "The speed is: " << _speed << std::endl;
        }
        void    setSpeed (int speed) {
            this->_speed = speed;
        }
};

class Car {
    private:
        int _speed;
    public:
        Car(void) {
            _speed = 0;
            std::cout << "Speed is zero" << std::endl;
        }
        void    accelarate (void) {
            for (;;) {
                _speed += 10;
                std::cout << "Speed is: " << _speed << std::endl;
                if (_speed > 250) {
                    Overspeed s;
                    s.setSpeed(_speed);
                    throw s;
                }
            }
        }
};

int main() {

    Car baigalaas;

    try {
        baigalaas.accelarate();
    }
    catch (Overspeed s){
        std::cout << s.whatever() << std::endl;
    }

    return 0;    
}