#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int M;
        cin >> M;

        int sum = 0;
        int member[M];

        for(int j = 0; j < M; j++) {
            cin >> member[j];
            sum = sum + member[j];
        }

        cout << sum << endl;
    }
}