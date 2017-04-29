#include <iostream>

const int SIZE = 64;

class Stack {

 private:

  int i;
  int a[SIZE];

 public:

  Stack() : i(0) {}

  void inspect() {
    printf("<%i>", i);
    for (int x = 0; x < i; ++x)
      printf(" %i", a[x]);
    printf("\n"); }

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
