#include<bits/stdc++.h>
using namespace std;


int main(){
   int a[5]={0,5,2,3,4};
   int *ptr=&a[0];

   cout<<"The value of a[0]: "<<*ptr<<endl;

   ptr+=3;

   cout<<"the value of a[1]:  "<<*ptr<<endl;
}