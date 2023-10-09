#include <iostream>
using namespace std;

int main () {
  int num;
  int factorial = 1;
  cin >> num;
    if (num >= 0) {  
    for (int i = 1; i <= num; ++i) {
      factorial *= i;
      }
    }
    else {
      cout << "Not a valid number" << endl;
    }
  return 0;
  }
