#include<iostream>
using namespace std;

int calculate_marks(int a,int b,int c);
void gradeAllot(int a);
int main(){
    int physics, chem, maths;
    cout<<"Enter marks of physics:";
    cin>>physics;
    cout<<"Enter marks of Chemistry:";
    cin>>chem;
    cout<<"Enter marks of Maths:";
    cin>>maths;

    calculate_marks(physics,chem,maths);
    return 0;
}

int calculate_marks(int a,int b,int c){
    int avgMarks=((a+b+c)/3);
    gradeAllot(avgMarks);
    return 0;
}

void gradeAllot(int marks){

    if (marks>=90)
        cout<<"Your grade is A+";
    
    else if (marks<90 && marks>=80)
        cout<<"Your grade is A";
    
    else if (marks<80 && marks>=70)
        cout<<"Your grade is B+";
    
    else if (marks<70 && marks>=60)
        cout<<"Your grade is B";

    else if (marks<60 && marks>=45)
        cout<<"Your grade is C";

    else if (marks<45 && marks>=35)
        cout<<"Your grade is D";
    
    else
        cout<<"You are failed";
    
}
    