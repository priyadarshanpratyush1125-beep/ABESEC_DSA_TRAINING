//TCS PYQ
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> B;

    // Store prime numbers
    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i))
            B.push_back(i);
    }

    vector<int> ans;

    int j = 0;
    int k = 1;

    while (ans.size() < N) {

        // First prime
        if (ans.size() < N)
            ans.push_back(B[j]);

        // Second prime
        if (ans.size() < N)
            ans.push_back(B[k]);

        // Product
        if (ans.size() < N)
            ans.push_back(B[j] * B[k]);

        j = j + 2;
        k = k + 2;
    }

    // Print answer
    for (int i = 0; i < N; i++) {
        cout << ans[i];

        if (i != N - 1)
            cout << " ";
    }

    return 0;
}