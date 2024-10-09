#include<iostream>
using namespace std;

class student{
    private:
        char name[20];
        int regno,sub[3];
        float total,avg;
    public:
        void read(){
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter registration number:";
            cin>>regno;
            //cout<<"Enter Subjects marks:";
            int subj=1;
            for(int i=0;i<3;i++){
                cout<<"Enter Subject "<<subj<<" mark:";
                cin>>sub[i];
                subj++;
            }
        }
        void result(){
            total=0;
            for(int i=0;i<3;i++){
                total += sub[i];
            }
            avg=total/3;
        }
        void print();
};

void student::print(){
    cout<<"\n\n"<<"OUTPUT\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Registration number: "<<regno<<endl;
    cout<<"Total marks of Subject:"<<total<<endl;
    cout<<"Average marks: "<<avg<<endl;
}

class comparison{
    private:
        int arr[3],min,max;
    public:
        void read(){
        int mark=1;
            for(int i=0;i<3;i++){
                cout<<"Enter Subject "<<mark<<" mark:";
                cin>>arr[i];
                mark++;
            }
    }
        void compare(){
            min=arr[0];
            max =sizeof(arr)-1;
            for(int i=1;i<3;i++){
                if(arr[i]<min){
                    min=arr[i];
                }
                if(arr[i]>max){
                    max=arr[i];
                }
            }
        }
        void display(){
            cout<<"Maximum marks is: "<<max<<endl;
            cout<<"Minimum marks is :"<<min<<endl;
        }
};

class maximum{
    private:
        int max1,max2,max3,arr[5];
    public:
        void read(){
            for(int i=0;i<3;i++){
                cout<<"Enter Subject "<<i+1<<" mark:";
                cin>>arr[i];
            }
        }
        void compare(){
            
        }
};

int main(){
    comparison c1;
    c1.read();
    c1.compare();
    c1.display();
    return 0;
    // student s[5];
    // for(int i=0;i<5;i++){
    //     cout<<"\nEnter student "<<i+1<<" details: \n"<<endl;
    //     s[i].read();
    //     s[i].result();
    //     s[i].print();
    // }
    // return 0;
}