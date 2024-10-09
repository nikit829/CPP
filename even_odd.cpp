#include<iostream>
using namespace std;

void check(int n);

int main(){
    int n;
    cout<<"Enter no to check whether it's even or odd\n";
    cin>>n;
    check(n);
}
void check(int n){
    if (n==0)
        cout<<"Number is neither even nor odd";

    else if(n%2==0)
        cout<<"Number is even";
    
    else
        cout<<"Number is odd";
    
    
}