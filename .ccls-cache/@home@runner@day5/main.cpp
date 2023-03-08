// Write a program to identify if the number is even or odd
#include <iostream>
using namespace std;
void oddornot(int a) {
  if (a == 0 || a % 2 == 0) {
    cout << "Even Number" << endl;
  } else {
    cout << "ood Number" << endl;
  }
}

int main() {
  int a;
  cin >> a;
  oddornot(a);
}