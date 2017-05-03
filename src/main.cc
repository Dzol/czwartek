#include <iostream>

const int SIZE = 64;

class Stack {

 private:

  int i;
  int a[SIZE];

  void size() {
    std::cout << "<" << i << ">"; }

  void element(int i) {
    std::cout << " " << a[i]; }

 public:

  Stack() : i(0) {}

  void inspect() {
    size();
    for (int j = 0; j < i; ++j)
      element(j);
    std::cout << "\n"; }

  void push (int x) {
    if (i < SIZE)
      a[i++] = x; }

  int pop() {
    return a[--i]; }
};

int main () {

  Stack fu;
  fu.inspect();

  fu.push(2);
  fu.inspect();

  fu.pop();
  fu.inspect();
  
  return 0;
}
