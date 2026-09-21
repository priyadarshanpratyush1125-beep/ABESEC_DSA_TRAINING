#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> marks(n);

    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    sort(marks.begin(), marks.end(), greater<int>());

    int sum = 0;

    // Sum of top 5
    for(int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    cout << sum << endl;

    // Last 5 in decreasing order
    for(int i = n - 5; i < n; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}