// 5. Write a program that reverses any given no? Use Divide by 10 rule?
#include <iostream>
using namespace std;

int main() {

  int num, reversed_num = 0, remainder;

  cout << "Enter an Number: ";
  cin >> num;

  while(num!=0) {
    remainder = num%10;
    reversed_num = reversed_num*10+remainder;
    num/=10;
  }

  cout << "Reversed Number = " << reversed_num;

  return 0;
}
