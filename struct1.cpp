#include<bits/stdc++.h>
using namespace std;

void find(){
    static int a = 10;
    int b = 10;
    if(b>5&&a++<15) cout<<"Code"<<endl;
    cout<<a<<endl;

}

int main() {
    int a = 50;
    find();
    find();
    find();
    return 0;
}
// int a = 10;
// void find() {
//     static int a =10;
//     a =50; // 2nd code
//     a++;
//     cout<<a<<endl;

// }
// int main() {
//     int a =50;
//     find();
//     find();
//     find();
//     cout<<a<<endl;
//     return 0;
// }