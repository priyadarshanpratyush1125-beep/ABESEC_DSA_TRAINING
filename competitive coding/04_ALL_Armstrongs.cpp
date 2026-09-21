#include <bits/stdc++.h>
using namespace std;

bool arm(int num) {
    int original = num;
    int org = num;
    int count = 0;
    int sum = 0;

    // Count digits
    while (org > 0) {
        count++;
        org = org / 10;
    }

    // Special case for 0
    if (num == 0) {
        count = 1;
    }

    // Calculate Armstrong sum
    while (num > 0) {
        int digit = num % 10;
        sum = sum + pow(digit, count);
        num = num / 10;
    }

    return original == sum;
}

int main() {
    int A, B;
    cin >> A >> B;

    bool change = false;

    for (int i = A; i <= B; i++) {
        if (arm(i)) {
            cout << i << " ";
            change = true;
        }
    }

    if (change == false) {
        cout << "NO no found";
    }
}