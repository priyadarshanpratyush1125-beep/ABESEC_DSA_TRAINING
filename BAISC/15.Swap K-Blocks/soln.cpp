#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i += 2 * K) {
        for(int p = 0; p < K; p++) {
            swap(arr[i + p], arr[i + K + p]);
        }
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}