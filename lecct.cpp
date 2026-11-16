#include<iostream>
using namespace std;
int main() {
    string customerName;
    int tableNumber;
    string itemOrdered;
    double totalBill;

    string Customer1;
    string cust1_name;
    cout<<"Enter customer1 name: ";
    cin>>cust1_name;
    int cust1_table;
    cout<<"Enter custoemr1 table num:";
    cin>>cust1_table;
    string cust1_item;
    cout<<"Enter the items: ";
    cin>>cust1_item;
    double cust1_bill;
    cout<<"Total : ";
    cin>>cust1_bill;

    string Customer2;
    string cust2_name;
    cout<<"Enter customer2 name: ";
    cin>>cust2_name;
    int cust2_table;
    cout<<"Enter custoemr2 table num:";
    cin>>cust2_table;
    string cust2_item;
    cout<<"Enter the items: ";
    cin>>cust2_item;
    double cust2_bill;
    cout<<"Total : ";
    cin>>cust2_bill;

    cout<<"Customer 1 data:"<<endl;
    cout<<"Name: "<<cust1_name<<endl;
    cout<<"Table num : "<<cust1_table<<endl;
    cout<<"Item : "<<cust1_item<<endl;
    cout<<"Total bill : "<<cust1_bill<<endl<<endl;

    cout<<"Customer 2 data:"<<endl;
    cout<<"Name: "<<cust2_name<<endl;
    cout<<"Table num : "<<cust2_table<<endl;
    cout<<"Item : "<<cust2_item<<endl;
    cout<<"Total bill : "<<cust2_bill<<endl;
    
    return 0;
}