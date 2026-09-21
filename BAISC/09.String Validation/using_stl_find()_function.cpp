#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    //s.find('&')--->return an (size_t value) which is a postion of char if exist but it tell postion of 1st occurence of char
    //if char does not exit it give garbage value so use string::npos
    if(s.find('&')!=string::npos  && s.find('#')!=string::npos && s.length()%2==0){
        cout<<"YES";
    }
    else cout<<"NO";


}