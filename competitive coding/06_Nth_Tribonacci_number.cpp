#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << 1;
        return 0;
    }

    int a = 1, b = 1, c = 1;

    for (int i = 3; i <= n; i++) {
        int d = a + b + c;

        a = b;
        b = c;
        c = d;
    }

    cout << c;
    
    // with recurrsion----
    /* 
    int tribonacci(int n) {
    if (n == 0 || n == 1 || n == 2)
        return 1;

    return tribonacci(n - 1)
         + tribonacci(n - 2)
         + tribonacci(n - 3);
}

*/

    return 0;
}