#include <iostream>
using namespace std;

int main() {
    double tempc;
    double tempf;
    cout << "Type temperature in celsius: ";
    cin >> tempc;

    tempf = (tempc * 1.8) + 32;

    cout << "The temperature in Fahrenheit is " << tempf;
}
