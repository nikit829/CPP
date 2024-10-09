#include<iostream>
using namespace std;

void fibonacci( int n);

int main(){
    int n;
    cout<<"To what number I print fibonacci series";
    cin>>n;

    fibonacci(n);
}
void fibonacci(int n){
    int a,b,temp;
    a=0;
    b=1;
    cout<<"Fibonacci series is"<<a<<"\n"<<b;
    for(int i=1;i<=n;i++){
        temp=a+b;
        a=b;
        b=temp;
        cout<<"\n"<<temp;
    }  
};