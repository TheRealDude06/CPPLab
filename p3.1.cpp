#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
string owner;
double balance; // cannot go negative -- enforced below
public:
void open(const string &name, double initial) {
owner = name;
balance = (initial > 0) ? initial : 0;
}
void deposit(double amt) { if (amt > 0) balance += amt; }
bool withdraw(double amt) { // returns success
if (amt > 0 && amt <= balance) { balance -= amt; return true; }
return false; // protects the invariant
}
double getBalance() const { return balance; } // const: read-only
string getOwner() const { return owner; }
};
int main() {
BankAccount a;
a.open("Asha", 1000);
a.deposit(500);
if (!a.withdraw(2000)) cout << "Withdraw denied (insufficient)\n";
a.withdraw(300);
cout << a.getOwner() << " balance = " << a.getBalance() << endl;
return 0;
}
