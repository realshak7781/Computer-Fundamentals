#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    void display(){cout<<"Base display\n";}
    virtual void show(){cout<<"Base show\n";}
};


class derived : public Base{
    public:
    void display(){cout<<"Derived display\n";}
    void show(){cout<<"Derived show\n";}
};

int main(){
    Base *b;
    Base obj;
    b=&obj;

    b->display();
    b->show();

    cout<<"Derived\n";
    derived d;
    b=&d;   

    b->display();
    b->show();

    return 0;
}