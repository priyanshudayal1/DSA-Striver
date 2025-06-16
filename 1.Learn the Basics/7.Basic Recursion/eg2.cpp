#include<iostream>
using namespace std;

int count=0;

void f(){
    if (::count==4) return;
    cout<<"Lo Bhai"<<endl;
    ::count++;
    f();
}

int main(){
    f();
    return 0;
}