// static data members variables

#include<bits/stdc++.h>
using namespace std;


class item
{
    int id;
    float price;
    static int count; // static variable
    public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
        count++;
    }   
    void getdata()
    {
        cout<<"Code : "<<id<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"count : "<<count<<endl;
    }   
};

int item :: count=10; // static variable
//if not initialized the value will be 0

int main()
{
    item x, y;
    x.setdata(1, 100);
     x.getdata();

     cout<<endl<<endl;

    y.setdata(2, 200);
    y.getdata();
    return 0;
}