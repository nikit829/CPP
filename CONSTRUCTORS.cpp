#include<iostream>
using namespace std;

class student{
    public:
    int regno,rollno;
    string name;

//default constructor
    student(){
        cout<<"Default Constructor"<<endl;
        cout<<"Enter registration and roll no."<<endl;
        cin>>regno>>rollno;
        cin.ignore();
        getline(cin,name);

        cout<<"Your registration no. is: "<<regno<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }

//parametrized constructor
    student(int reg, int rn, string nme){
        regno=reg;
        rollno=rn;
        name=nme;

        cout<<"Parametrized constructor"<<endl;
        cout<<"Your registration no. is: "<<regno<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
    
//copy constructor
    student( student &y){
        cout<<"Copy Constructor"<<endl;
        regno=y.regno;
        rollno=y.rollno;
        name=y.name;

        cout<<"Your registration no. is: "<<regno<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }

//destructor
    ~student(){
        cout<<"Destructor Called for regno: "<<regno<<endl;
    }
};


int main(){
//default constructor
    student obj1;
    
    int reg,roll;
    string name;

//parametrized constructor
    cout<<"Enter registration and roll no."<<endl;
    cin>>reg>>roll;
    cin.ignore();
    getline(cin,name);

    student obj2(reg,roll,name);

//copy constructor
    student obj3(obj2);
    return 0;
}