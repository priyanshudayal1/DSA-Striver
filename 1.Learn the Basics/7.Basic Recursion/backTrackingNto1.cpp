#include<iostream>
using namespace std;

void f(int i,int n ){
    if (i>n) return;
    f(i+1,n);
    cout<<i<<' ';
}

int main(){
    f(1,5);
    return 0;
}