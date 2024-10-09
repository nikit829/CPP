#include <iostream>
using namespace std;

class E_bill{
    private: 
        int bill,units,O_unit,C_unit,tax;

    public:
        void read(){
            cout<<"Enter Old unit : ";
            cin>>O_unit;
            cout<<"Enter current unit: ";
            cin>>C_unit;
        }

        friend void cal_bill(E_bill&);

        void cal_tax(){
            tax= bill * 18 / 100;
            bill+=tax;
        }
        void print(){
            cout<<"\n\n"<<"OUTPUT\n";
            cout<<"Units consumed is: "<<units<<endl;
            cout<<"Bill is: "<<bill<<endl;
            cout<<"Tax added is: "<<tax<<endl;
        }
};
void cal_bill(E_bill& eb1)
{
    eb1.units=eb1.C_unit-eb1.O_unit;
    if (eb1.units<=100)
                eb1.bill=3 * eb1.units;

    else if (eb1.units>100 && eb1.units<=200)
                eb1.bill=(3 * 100) + ((eb1.units-100) * 4);

    else if(eb1.units>200){
                eb1.bill=(3 * 100) + (4 * 100) + ((eb1.units-200) * 5);
            }

}
int main(){
    E_bill eb;
    eb.read();
    cal_bill(eb);
    eb.cal_tax();
    eb.print();

}

// class bill_consumer{
//     private:
//         int consumerType,
//     public:


// };