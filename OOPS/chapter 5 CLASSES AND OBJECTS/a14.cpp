// passing objects into functions


#include <iostream>
using namespace std;

class time {
    int minutes, hours;

public:
    void setdata(int a, int b) {
        minutes = a;
        hours = b;
    }

    void getdata() {
        cout << "Hours : " << hours << endl;
        cout << "Minutes : " << minutes << endl;
    }

    // Now sum function returns a new time object
    time sum(time t1, time t2);
};

time time::sum(time t1, time t2) {
    time result; // Create a new time object to hold the result

    result.minutes = t1.minutes + t2.minutes; // Sum the minutes
    result.hours = t1.hours + t2.hours; // Sum the hours

    // Normalize minutes and hours
    result.hours += result.minutes / 60; // Add carry from minutes to hours
    result.minutes = result.minutes % 60; // Normalize minutes to 0-59
    result.hours = result.hours % 24; // Normalize hours to 0-23

    return result; // Return the resulting time object
}

int main() {
    time t1, t2, t3;
    t1.setdata(20, 10); // Setting t1 as 10 hours and 20 minutes
    t2.setdata(40, 30); // Setting t2 as 30 hours and 40 minutes

    t3=t3.sum(t1, t2); // Capture the result of the sum in t3
    cout << "Resulting Time: " << endl;
    t3.getdata(); // Display the result
    return 0;
}
