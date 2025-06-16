#include<iostream>
using namespace std; 

int sum(int a,int b){
    int sum=a+b;
    return sum;
}

int main(){
    int a=10,b=30;
    cout<<sum(a,b);
    return 0;
}