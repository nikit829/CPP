#include<iostream>
using namespace std;

void sum(int a,int b, int c);
int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    sum(a,b,c);
}
void sum(int a,int b, int c){
    cout<<"Sum of all numbers is: "<<(a+b+c)<<endl;
};