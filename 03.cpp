#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

float multiply_float(float *pointer, float multiply_by) {
  *pointer = *pointer * multiply_by;
  return *pointer;
}

int main() {
  float total = 123;
  float *ptotal = &total;
  float number = 5;
  cout << *ptotal << endl;
  multiply_float(ptotal, number);
  cout << *ptotal << endl;
  return 0;
}
