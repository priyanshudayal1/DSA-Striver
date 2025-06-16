#include<iostream>
using namespace std;

void f(int n,int i=1){
    if (n<i) return;
    cout<<n<<endl;
    // if (n==1) return;
    f(n-1,i);
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(n);
    return 0;
}