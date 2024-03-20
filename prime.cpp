#include<iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 2;

    while (count < 50) {
        bool isPrime = true;

        for (int possibleDivisor = 2; possibleDivisor < num; possibleDivisor++) {
            if (num % possibleDivisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << "\t";
            count++;

            if (count % 10 == 0) {
                cout << "\n" << endl;
            }
        }

        num++;
    }

    cout << endl;

    return 0;
}
