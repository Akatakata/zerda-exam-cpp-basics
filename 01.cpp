#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool is_biggest(int array[], int length, int number) {
  int biggest = 0;
  for (int i = 0; i < length; i++) {
    if (biggest < array[i]) {
      biggest = array[i];
    }
  }
  if (biggest >= number) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  cout << "Is there > or = than 6? " << is_biggest(array, 5, 6) << endl;
  cout << "Is there > or = than -2? " << is_biggest(array, 5, -2) << endl;
  cout << "Is there > or = than 8? " << is_biggest(array, 5, 8) << endl;
  return 0;
}
