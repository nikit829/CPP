#include<iostream>
using namespace std;

int main() {
  char name[10];
  int dob,curr_year,age;

  cout<<"Enter your Name:";
  cin>>name;
  cin>>curr_year>>dob;
  
  //cout<<"Enter curr_year";
  //cout<<"Enter Date of Birth";
  //cin>>dob;

  age=curr_year-dob;
  cout<<"Hello"<<name<<"your age is "<<age;
  return 0;

}