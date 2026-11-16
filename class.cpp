#include<iostream>
using namespace std;
class RestaurentOrder{
    public:
    string customerName;
    int tableNumber;
    string itemOrdered;
    double totalBill;

    RestaurentOrder(string n,int t,string i,double b) {
        customerName = n;
        tableNumber=t;
        itemOrdered=i;
        totalBill=b;
    }

    void printorder() {
        cout<<"Order details"<<endl;
        cout<<"Customer name : "<<customerName<<endl;
        cout<<"Table no. : "<<tableNumber<<endl;
        cout<<"Item ordered:"<<itemOrdered<<endl;
        cout<<"Bill:"<<totalBill<<endl;

    }
};
int main() {
    RestaurentOrder a1("Alice",100,"Tea",11000.5);
    RestaurentOrder a2("Bob",500,"Tea",10005.5);

    // a1.customerName ="Alice";
    // a1.tableNumber = 100;
    // a1.itemOrdered = "Tea";
    // a1.totalBill = 1000;

    // a2.customerName ="Alice";
    // a2.tableNumber = 100;
    // a2.itemOrdered = "Tea";
    // a2.totalBill = 1000;

    a1.printorder();
    a2.printorder();

    // cout<<"Order 1: "<<endl;
    // cout<<a1.customerName<<endl;
    // cout<<a1.tableNumber<<endl;
    // cout<<a1.itemOrdered<<endl;
    // cout<<a1.totalBill<<endl;

    // cout<<"Order 2: "<<endl;
    // cout<<a2.customerName<<endl;
    // cout<<a2.tableNumber<<endl;
    // cout<<a2.itemOrdered<<endl;
    // cout<<a2.totalBill<<endl;

    return 0;

}

