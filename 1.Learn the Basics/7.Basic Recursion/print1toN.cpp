#include<iostream>
using namespace std;

void f(int n,int i=1){
    if (i>n) return;
    cout<<i<<endl;
    // if (n==1) return;
    f(n,i+1);
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(n);
    return 0;
}