#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int find_area(void);
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::find_area (void) {
  return(width*height);
}

int main () {
  Rectangle rec;
  rec.set_values (3,4);
  cout << "area: " << rec.find_area() << "\n";
  return 0;
}