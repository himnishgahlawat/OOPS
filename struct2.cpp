#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
class Demo {
public:
    void print() {
        cout<<"Hello"<<endl;
    }
    int find();
};
inline int Demo::find() {
    return 1;
}
int main() {
    Demo a;
    cout<<a.find()<<endl;
    a.print();
    return 0;
}