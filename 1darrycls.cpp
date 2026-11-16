#include<bits/stdc++.h>
using namespace std;

class A {
    int *arr;
    int n;
    public:
    void read() {
        cin>>n;
        arr = new int[n];
    }
    void display() {
        for(int i = 0;i<n;i++) {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
};


int main() {
    A a1;
    A a2;
    int n;
    cout<<"enter total size "<<endl;
    cin>>n;
    int arr[n];
    return 0;
}