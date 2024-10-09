#include<iostream>
using namespace std;

void prime(int n);
int main(){
    int n;
    cout<<"Enter a number to check whether it's prime or not\n";
    cin>>n;

    (prime(n));
}
void prime(int n){
    bool isPrime=true;
    if(n==0||n==1){
        cout<<"It's not prime";
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime==true)
        cout<<"It's Prime";
    else
        cout<<"It's not prime";
}