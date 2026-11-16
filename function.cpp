#include<iostream>
using namespace std;

//You are writing a billing module for an e-commerce platform.
// Write a C++ function named calculateBill that takes three parameters:
// price (double, required)
// taxRate (double, default value of 0.05 for 5%)
// shippingFee (double, default value of 10.0)
// The function should calculate and return the final total price using the formula:
// Total = price + (price * taxRate) + shippingFee
// In main(), call the function in three distinct ways:
// Passing only the item price (100.0).
// Passing the price (100.0) and a custom tax rate (0.10).
// Passing the price (100.0), a custom tax rate (0.10), and a custom shipping fee.


// double CalculateBill(double price,double taxRate,double shippingFee) {
//     double total = price+(price*taxRate)+shippingFee;
//     return total;
// }
// double CalculateBill(double price) {
//     double total = price+(price*0.05)+10.0;
//     return total;
// }
// double CalculateBill(double price,double taxRate) {
//     double total = price+(price*taxRate)+10.0;
//     return total;

// }
// int main() {
//     cout<<CalculateBill(100.0)<<endl;
//     cout<<CalculateBill(100.0,0.1,50.0)<<endl;
//     cout<<CalculateBill(100.0,0.10,30.0)<<endl;
//     return 0;
// }

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
int main() {
    cout<<fib(10);
    return 0;

}


