#include <iostream>
#include <cstring>
using namespace std;
class MyString {
char *data;
public:
MyString(const char *s) { // parameterized ctor
data = new char[strlen(s) + 1];
strcpy(data, s);
}
MyString(const MyString &o) { // DEEP copy ctor
data = new char[strlen(o.data) + 1]; // own fresh memory
strcpy(data, o.data);
}
~MyString() { delete[] data; } // each object frees its own
void print() const { cout << data << endl; }
};
int main() {
MyString a("hardware");
MyString b = a; // copy ctor runs -> deep copy
a.print();
b.print();
return 0; // both destructors safe; no double free
}