#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        int sum = 0;

        if(i % 3 == 0) {
            int org = i;

            while(org > 0) {
                int digit = org % 10;
                sum += digit;
                org = org / 10;
            }

            if(sum % 2 == 0) {
                cout <<i<< " ";
            }
        }
    }
}