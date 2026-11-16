#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter total element"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int k =3;
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<"Kth element = "<<arr[k-1]<<endl;

}