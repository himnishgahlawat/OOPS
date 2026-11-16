#include<iostream>
using namespace std;
class Employee {
    int id;
    string name;
    double salary;
    public:
    void getData() {
        cin>>id;
        cin>>name;
        cin>>salary;

    }

    void display() {
        cout<<"Employee with higher salary: "<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        printf("Salary :%0.1lf",salary);
    }
    friend void compare(Employee a,Employee b);
};
void compare(Employee a,Employee b) {
    if(a.salary==b.salary) {
        cout<<"Both employee have the same salary"<<endl;
    }
    else if(a.salary>b.salary) {
        a.display();
    }
    else b.display();
}
int main() {
    Employee a;
    Employee b;
    a.getData();
    b.getData();
    compare(a,b);
    return 0;
}