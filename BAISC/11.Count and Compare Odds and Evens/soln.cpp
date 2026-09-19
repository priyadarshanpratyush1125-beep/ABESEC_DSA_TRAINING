#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int count_odd=0;
    int count_even=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;   
        } 
    }
    if(count_odd>count_even){
        cout<<"ODD";
    }
    else if(count_odd<count_even){
        cout<<"EVEN";
    }
    else cout<<"TIE";
}