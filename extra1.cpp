#include <iostream>
using namespace std;

class Book{
    string title;
    int price;
    public:
    Book(string t,int p) {
        title=t;
        price=p;
    }
    void display() {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
    void area(int side) {
        cout<<"Area : "<<side*side<<endl;
    }
    void area(int length,int breadth) {
        cout<<"Area : "<<length*breadth<<endl;
    }
};
int main() {
    string title;
    int price;
    cin>>title;
    cin>>price;

    Book b(title,price);
    b.display();
    int side,length,breadth;
    cin>>side>>length>>breadth;
    b.area(side);
    b.area(length,breadth);
    return 0;
}

// int main() {
//     int x;
//     cin >> x;

//     int *p = &x;

//     cout << *p << endl;
//     cout << p;

//     return 0;
// }