#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer between 100 and 999: ";
    cin >> num;
    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;
    cout << "Digits: " << digit1 << " " << digit2 << " " << digit3 << endl;
    int sum = digit1 + digit2 + digit3;
    cout << "Sum of the three digits: " << sum << endl;
    cout << "Sum is divisible by 3: " << ((sum % 3 == 0) ? "True" : "False") << endl;
    return 0;
}
