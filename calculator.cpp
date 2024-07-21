#include <iostream>
using namespace std;

int main() {
  double num1;
  double num2;
  int operation;
  double output;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "1) Addition\n";
  cout << "2) Subtraction\n";
  cout << "3) Multiplication\n";
  cout << "4) Division\n";

  cout << "Enter the operator: ";
  cin >> operation;

  cout << "Enter the second number: ";
  cin >> num2;

  switch(operation) {
    case 1:
      output = num1 + num2;
      break;
    case 2:
      output = num1 - num2;
      break;
    case 3:
      output = num1 * num2;
      break;
    case 4:
      output = num1 / num2;
      break;
  }

  cout << "The output is " << output << endl;
}
