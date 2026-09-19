#include<iostream>
#include<cmath> 
using namespace std;
int main(){
    /* suppose i want to value with round off to nearest intger eg- 5.2 roundoff 5  5.6 roundoff  6
    but previously what i think i will store float value to int but the problem is that it extract 
    only interger part from it then print (means 2.9 --> 2  and 2.3 ---> 2)but i want mathematical nearest int
    so i use round() function which is cmath lib*/ 
    float a =2.3;
    float b = 2.9;
    int y=a; //it stores 2
    int z=b; //it stores 2
    cout<<"for 2.9 it print 2 "<< y<<endl;
    cout<<"for 2.3 it print 2  "<< z<<endl;
    //using round() function 
    cout << round(2.548) << endl;
    cout << round(2.518) << endl;
    cout << round(2.1) << endl;
    cout << round(2.8) << endl;
    cout << round(2.5) << endl;

}
