#include<iostream>
using namespace std;
class Distance{
    private:
    int meters;
    public:
    Distance(int m) : meters(m)
    {

    }
    //Conversion function: distance to int
    operator int() const{
        return meters;
    }
    void display() const {
        cout<<"Distance = "<<meters<<" meters "<<endl;
    }
}
int main() {
    
}