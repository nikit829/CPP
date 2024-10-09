#include<iostream>
using namespace std;

void factorial(int n);

int main(){
    int n;
    cout<<"Enter a number:\n";
    cin>>n;

    factorial(n);
}
void factorial(int n){
    int fact=1;
    if (n<=1)
        cout<<"Factorial of number is 1";

    else{
        for(int i=n;i>1;i--){
            fact=fact*i;
        }
    }
    cout<<"Factorial Value is: "<<fact<<endl;
}