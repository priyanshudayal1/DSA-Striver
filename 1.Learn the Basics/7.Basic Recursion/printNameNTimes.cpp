#include<iostream>
using namespace std;

void f(string s,int n,int i=1){
    if (i>n) return;
    cout<<s<<endl;
    // if (n==1) return;
    f(s,n,i+1);
    
}

int main(){
    int n;
    string s = "piyush";
    cout<<"Enter number of times : ";
    cin>>n;
    f(s,n);
    return 0;
}