#include<iostream>
using namespace std;
class Fees
{
private:
    int graduation_marks, lpunest_marks;
    long regno;
    static double std_fee;
    int sch=0;
    int Option;


public:
    void input(){
        cout<<"Enter Registration no: "<<endl;
        cin>>regno;
        cout<<"Enter graduation marks in percent: "<<endl;
        cin>>graduation_marks;
        cout<<"Enter LPUNEST marks in percent: "<<endl;
        cin>>lpunest_marks;

    }
    int calc_sch(){
        if (lpunest_marks>70)
        {
            Option=1;
            if(lpunest_marks>=90)
                sch=40;
            else if (lpunest_marks<90 && lpunest_marks >=80)
                sch=30;
            else if (lpunest_marks<80 && lpunest_marks>=70)
                sch=20;
        }
        
        else if (graduation_marks>60){
            Option=0;
            if(graduation_marks>=90)
                sch=35;
            else if (graduation_marks<90 && graduation_marks >=80)
                sch=30;
            else if (graduation_marks<80 && graduation_marks>=70)
                sch=20;
            else if (graduation_marks<70 && graduation_marks>=60)
                sch=10;
        }
        return sch;
    }
    static void calc_fees(int sch){
        std_fee=100000;
        std_fee = std_fee - (std_fee * sch/100);
    }
    void display(){
        string a=Option==1?"LPUNEST marks":"Graduation marks";
        cout<<"\n Registration Number: "<<regno;
        cout<<"\n Scholarship applied basis on "<< a <<": "<<sch<<"%";
        cout<<"\n Total Fees: "<<std_fee;
    }
};

double Fees::std_fee = 0.0;

int main(){
    Fees f1;
    f1.input();
    int ret= f1.calc_sch();
    Fees::calc_fees(ret);
    f1.display();
    return 0;
}