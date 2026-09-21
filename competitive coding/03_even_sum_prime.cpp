#include <bits/stdc++.h>
using namespace std;

bool isprime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    int count = 0;

    for (int i = A; i <= B; i++) {

        if (isprime(i)) {

            int org = i;
            int sum = 0;

            while (org > 0) {
                int digit = org % 10;
                sum = sum + digit;
                org = org / 10;
            }

            if (sum % 2 == 0) {
                count++;
            }
        }
    }

    cout << count;
}