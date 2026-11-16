#include<bits/stdc++.h>
using namespace std;

class Player {

private:
    string name;
    int health;

public:

    Player(int h, string n) {
        health = h;
        name = n;
    }

    string getname() {
        return name;
    }

    int gethealth() {
        return health;
    }

    void takeDamage(int amount);
};

void Player::takeDamage(int amount) {
    health -= amount;

    if (health < 0) {
        health = 0;
    }
}

int main() {

    Player a(100, "arthur");

    cout << a.gethealth() << endl;

    a.takeDamage(130);

    cout << a.gethealth() << endl;

    return 0;
}