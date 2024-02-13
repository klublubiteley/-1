#include <iostream>

using namespace std;

int i = 9;
char c = 76;
float f = 4.123456;
double d = 4.123456;
bool b = true;
bool b2 = true;

int main() {

  cout << "i = " << i << "\n";
  cout << "c = " << c << "\n";
  cout << "f = " << f << "\n";
  cout << "d = " << d << "\n";
  cout << "b = " << b << "\n";
  cout << "b2 = " << b2 << "\n";

  cout << &i << i << "\n";
  cout << static_cast<void*>(&c) << i << "\n";
  cout << &f << i << "\n";
  cout << &d << i << "\n";
  cout << &b << i << "\n";
  cout << &b2 << i << "\n";

  return 0;
}