#include <bits/stdc++.h>
using namespace std;

int objectCount = 0; // Renamed global variable

class alpha {
public:
    alpha() {
        objectCount++; // Refers to the global variable
        cout << "No of objects created: " << objectCount << endl;
    }
    ~alpha() {
        cout << "No of objects destroyed: " << objectCount << endl;
        objectCount--; // Refers to the global variable
    }
};

int main() {
    cout << "Enter main" << endl;

    alpha A1, A2, A3, A4;

    {
        cout << "Enter block1" << endl;
        alpha A5;
    }

    {
        cout << "Enter block2" << endl;
        alpha A6;
    }

    cout << "RE-enter main" << endl;
    return 0;
}
