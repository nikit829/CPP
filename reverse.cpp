#include<iostream>
using namespace std;

void reverse(int n);
int main(){
    int n;
    cout<<"Enter number to reverse it:\n";
    cin>>n;

    reverse(n);
}

void reverse(int n){
    while(n>=0){
        int temp=n%10;
        cout<<temp;
        n=n/10;
        if (n==0)
        {
            break;
        }
        
    }
    cout<<endl;
};