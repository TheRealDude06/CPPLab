#include <iostream>
using namespace std;
class Box {
int w, h, d;
public:
Box(int w, int h, int d) : w(w), h(h), d(d) {} // the "real" ctor
Box() : Box(1, 1, 1) {} // delegates
Box(int s) : Box(s, s, s) {} // cube, delegates
int volume() const { return w * h * d; }
};
int main() {
Box a; Box b(3); Box c(2, 3, 4);
cout << a.volume() << " " << b.volume() << " " << c.volume() << endl;
return 0;
}