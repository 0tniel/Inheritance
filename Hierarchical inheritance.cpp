//NAME: Otniel
//PRN: 22070123069
//Exp-14
//Program-4
#include <iostream>
#include <string>

using namespace std;

class Jeans {
public:
    string type[3] = {"Bootcut", "Wide Leg", "Skinny"};
    
    void brand() {
        cout << "H&M - Denim" << endl;
    }
};

class Bootcut : public Jeans {
public:
    string color = "Dark Blue";
};

class WL : public Jeans {
public:
    string color = "Black";
};

class Skinny : public Jeans {
public:
    string color = "Grey";
};

int main() {
    Bootcut j1;
    cout << endl;
    j1.brand();
    cout << j1.type[0] << ": " << j1.color << endl;

    WL j2;
    cout << endl;
    j2.brand();
    cout << j2.type[1] << ": " << j2.color << endl;

    Skinny j3;
    cout << endl;
    j3.brand();
    cout << j3.type[2] << ": " << j3.color << endl;

    return 0;
}


