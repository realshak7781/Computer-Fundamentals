// should be done in multiple inheritance and single inheritance

#include <bits/stdc++.h>
using namespace std;

 class M{
    public:
    void m(){
        cout<<"M";
    }
 };

 class N{
    public:
    void m(){
        cout<<"N";
    }
 }; 

 class P: public M, public N{
    public:
    void m(){
       M::m();
    }
 };

 int main(){
    P p;
    p.m();
    return 0;
 }