// crearting a static member function

#include <iostream> 
using namespace std; 

class test {
public:
    int code; 
    static int count; 

    void setCode() { 
        code = ++count; 
    }

    void showCode() { 
        cout << "Object number: " << code << "\n"; 
    }

    static void showCount() { 
        cout << "Count: " << count << "\n"; 
    }
};


int test::count = 0;

int main() {
    test t1, t2, t3; // Create objects of class test

    // Set codes for t1 and t2
    t1.setCode();
    t2.setCode();

    // Show count and codes
    test::showCount(); // Call static member function
    t1.showCode(); // Show code for t1
    t2.showCode(); // Show code for t2
    t3.setCode(); // Set code for t3
    t3.showCode(); // Show code for t3

    return 0; // Correctly end main function
}
