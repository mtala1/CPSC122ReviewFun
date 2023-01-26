#include "vecfuncs.h""

int main() {
  vector<int> userNums;
  int min, max;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  findExtremes(userNums, min, max);
  cout << min << " " << max << endl;
}
// task 1 define and call a function
//  to find and return the min and max
//  number in the vector
//  task 2: convert this to 3 file format


