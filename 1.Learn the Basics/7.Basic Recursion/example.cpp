#include<iostream>
using namespace std;

void print(){
    cout<<"hey"<<'\n';
    print();
}

int main(){
    print();
    return 0 ;
}