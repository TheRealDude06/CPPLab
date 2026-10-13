#include <iostream>
using namespace std;
inline int square(int x) { return x * x; } // tiny -> inline
double area(double r) { return 3.14159 * r * r; } // circle
int area(int l, int b) { return l * b; } // rectangle
double area(double b, double h){ return 0.5 * b * h; } // triangle
int main() {
cout << "Square(6) = " << square(6) << endl;
cout << "Circle r=2 = " << area(2.0) << endl;
cout << "Rectangle 4x5 = " << area(4, 5) << endl;
cout << "Triangle b=3h=8= " << area(3.0, 8.0) << endl;
return 0;
}
