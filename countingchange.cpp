#include <iostream>
using namespace std;

int main() {
  int changeAmount;
  cin >> changeAmount;

  if (changeAmount <= 0) {
    cout << "No change" << endl;
    return 0;
  }

  int dollars = changeAmount / 100;
  int remainingChange = changeAmount % 100;
  int quarters = remainingChange / 25;
  remainingChange %= 25;
  int dimes = remainingChange / 10;
  remainingChange %= 10;
  int nickels = remainingChange / 5;
  int pennies = remainingChange % 5;

  if (dollars > 0) {
    cout << dollars << " Dollar" << (dollars > 1 ? "s" : "") << endl;
  }
  if (quarters > 0) {
    cout << quarters << " Quarter" << (quarters > 1 ? "s" : "") << endl;
  }
  if (dimes > 0) {
    cout << dimes << " Dime" << (dimes > 1 ? "s" : "") << endl;
  }
  if (nickels > 0) {
    cout << nickels << " Nickel" << (nickels > 1 ? "s" : "") << endl;
  }
  if (pennies > 0) {
    cout << pennies << (pennies > 1 ? " Pennies" : " Penny") << endl;
  }

  return 0;
}
