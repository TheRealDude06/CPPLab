#include <iostream>
using namespace std;
class Register { // models one 8-bit hardware register
private:
unsigned char value; // 0..255
public:
void write(unsigned char v) { value = v; }
unsigned char read() const { return value; }
void reset() { value = 0; }
};
int main() {
Register file[4]; // array of 4 objects
for (int i = 0; i < 4; ++i) file[i].reset();
file[0].write(0xAB);
file[3].write(0x10);
for (int i = 0; i < 4; ++i)
cout << "R" << i << " = " << (int)file[i].read() << endl;
return 0;
}