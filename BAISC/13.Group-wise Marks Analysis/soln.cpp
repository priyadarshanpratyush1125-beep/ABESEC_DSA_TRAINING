#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {

        int M;
        cin >> M;

        int sum = 0;
        int max = INT_MIN;
        int min = INT_MAX;

        int member[M];

        for(int j = 0; j < M; j++) {

            cin >> member[j];

            sum = sum + member[j];

            if(member[j] > max) {
                max = member[j];
            }

            if(member[j] < min) {
                min = member[j];
            }
        }

        cout << max << " ";
        cout << min << " ";
        cout << sum << " ";
        cout << fixed << setprecision(1) << (float)sum / M;
        cout << endl;
    }
}