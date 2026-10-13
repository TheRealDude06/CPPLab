#include <iostream>
using namespace std;
class Car {
int speed = 0;
friend class Dashboard; // Dashboard may read Car’s private data
public:
void accelerate() { speed += 10; }
};
class Dashboard {
public:
void display(const Car &c) { cout << "Speed = " << c.speed << " km/h\n"; }
};
int main() {
Car c; c.accelerate(); c.accelerate();
Dashboard().display(c); // 20 km/h
return 0;
}