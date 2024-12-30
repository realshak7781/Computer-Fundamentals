// a new way of declaring functions in c++
// declaring the methods (functions ) outside the class

#include<bits\stdc++.h>
using namespace  std;


class item {
    float weight,cost;

    public:

    void putData(float a ,float b);
    void getData();

};

void item :: putData(float a ,float b){
    weight = a;
    cost = b;
}

void item :: getData(){
    cout<<"Weight : "<<weight<<endl;
    cout<<"Cost : "<<cost<<endl;
}

int main(){
    item it;

    it.putData(10.22,20.22);
    it.getData();
}