#include <iomanip> // pre reqiste---> fixed and setprecision()
#include <bits/stdc++.h>
using namespace std;

int main() {
	float num;
	cin>>num;
	float result=num/2; //it stores 1.25 but to print i use fixed<<setprecision()
    cout << fixed << setprecision(2) <<result << endl;

}
