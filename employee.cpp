#include<iostream>
using namespace std;

class employee{
    private:
        int travel_allowances=0;
        int basic_pay, allowances, bonus, work_hours, Gross;
        char name[20];
    public:
        void read(){
            cout<<"Enter Employee name: "<<endl;
            cin>>name;
            cout<<"Enter basic pay: "<<endl;
            cin>>basic_pay;
            cout<<"Enter work hours: "<<endl;
            cin>>work_hours;
            cout<<"Enter 1 if any allowances: "<<endl;
            cin>>travel_allowances;

        }
        void cal_bonus(){
            if(work_hours>=70)
                bonus=basic_pay*7/100;
            else if(work_hours>=45 && work_hours<70)
                bonus=basic_pay*5/100;
            else if(work_hours>50)
                bonus=basic_pay*3/100;
        }
        void cal_allowance(){
            if(travel_allowances==1)
                allowances=basic_pay*3/100;
        }
        void cal_netSalary(){
            Gross=bonus+basic_pay+allowances;
        }
        void display(){
            cout<<"\n\n"<<"OUTPUT\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Gross Salary: "<<Gross<<endl;
            cout<<"Your bonus is: "<<bonus<<endl;
            cout<<"Your Allowance is: "<<allowances<<endl;
        };
};

// void employee::display(){
//     cout<<"\n\n"<<"OUTPUT\n";
//     cout<<"Name: "<<name<<endl;
//     cout<<"Gross Salary: "<<Gross<<endl;
//     cout<<"Your bonus is: "<<bonus<<endl;
//     cout<<"Your Allowance is: "<<allowances<<endl;
//     // cout<<"Salary includes bonus and allowances as"

// }

int main(){
    employee E1;
    E1.read();
    E1.cal_bonus();
    E1.cal_allowance();
    E1.cal_netSalary();
    E1.display();
    return 0;
}
