#include <bits/stdc++.h>
using namespace std;

bool jump(int i) {

    // Single digit numbers are always jumping numbers
    if (i < 10) {
        return true;
    }

    while (true) {

        int d1 = i % 10;   // last digit
        i = i / 10;        // remove last digit

        if (i == 0) {
            return true;
        }

        int d2 = i % 10;   // next digit

        if (abs(d1 - d2) != 1) {
            return false;
        }
    }
}

int main() {

    int num;
    cin >> num;

    for (int i = 0; i <= num; i++) {

        if (jump(i)) {
            cout << i << " ";
        }
    }

    return 0;
}