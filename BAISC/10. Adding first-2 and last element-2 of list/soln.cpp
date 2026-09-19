#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int sum_first_two=arr[0]+arr[1];
    int sum_last_two=arr[N-1]+arr[N-2];
    cout<<sum_first_two<<endl;
    cout<<sum_last_two<<endl;
}