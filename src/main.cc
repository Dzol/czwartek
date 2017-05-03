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

  Stack s;
  s.inspect();

  s.push(2);
  s.inspect();

  if (2 != s.pop())
    return 1;
  s.inspect();
  
  return 0;
}
