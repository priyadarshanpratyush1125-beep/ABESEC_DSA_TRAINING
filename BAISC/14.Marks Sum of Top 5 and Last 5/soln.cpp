#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int student[N];

    for(int i = 0; i < N; i++) {
        cin >> student[i];
    }

    sort(student, student + N);

    int sum = 0;

    for(int i = N-1; i >= N-5; i--) {
        sum += student[i];
    }

    cout << sum << endl;

    for(int i = N-1; i >= N-5; i--) {
        cout << student[i] << " ";
    }
}