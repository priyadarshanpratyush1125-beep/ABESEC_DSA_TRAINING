
#include <bits/stdc++.h>
using namespace std;

int sumdigit(int N) {
    int org = N;
    int sum = 0;

    while (org > 0) {
        int digit = org % 10;
        sum = sum + digit;
        org = org / 10;
    }

    return sum;
}

int main() {
    int N, K;
    cin >> N >> K;

    int sum1 = sumdigit(N);
    sum1 = sum1 * K;

    while (sum1 >= 10) {
        sum1 = sumdigit(sum1);
    }

    cout << sum1;

    return 0;
}

