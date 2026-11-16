#include<bits/stdc++.h>
using namespace std;
// struct A{
//     int a;
//     bool b;
//     double c;
// };
// int main() {
//     A a1;
//     cout<<a1.a<<endl;
//     cout<<a1.b<<endl;
//     cout<<a1.c<<endl;

//     cout<<"size of struct : "<<sizeof(a1)<<endl;
// }
struct A{
    int a;
    bool b;
    double c;
    A(int d,bool e,double f) {
        a=d;
        b=e;
        c=f;
        int arr[10];
    }
};
int main() {
    A a1(100,true,5.5);
    cout<<a1.a<<endl;
    cout<<a1.b<<endl;
    cout<<a1.c<<endl;

    cout<<"size of struct : " <<sizeof(a1)<<endl;
}