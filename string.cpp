#include<bits/stdc++.h>
using namespace std;
int main() {

    //SUBSTRING 
    string s = "Hello";
    cout<<s.substr(1,3)<<endl;//1 is the index and 3(total 3 chars) is the length4

    //ADDITION OF STRINGS
    string t = "World";
    s+=t;
    cout<<s<<endl;


    // s[0]='a';
    cout<<s[2]<<endl;
    //PRINTING EACH CHAR
    for(int i = 0;i<s.size();i++) {
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    //CONVERSION TO UPPER OR LOWER
    for(int i =0;i<s.size();i++) {
        // int x =s[i];
        // x=x-32;
        // cout<<(char)x<<" ";
        s[i]=toupper(s[i]);
    }

    //PUSHBACK AND POPBACK
    string y = "Hello";
    string z = "World";
    // y.push_back('W'); //add the char at the last
    // y.pop_back(); // removes the last char 

    //INSERT
    y.insert(0,"W");  // insert(start index,string) -> adds "W" at the 0th index
    cout<<y<<endl;

    // cout<<s;
    return 0;

}