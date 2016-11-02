#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int divisors(int number) {
  int counter = 0;
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      cout << i << endl;
      counter++;
    }
  }
  return counter;
}

int main() {
  int base = 30;
  cout << base << " has " << divisors(base) << " divisors." << endl;
  return 0;
}


