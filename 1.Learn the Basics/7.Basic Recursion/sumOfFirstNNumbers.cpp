#include<iostream>
using namespace std;

int f(int n,int sum,int i=1){
    if (n<i) return sum;
    sum+=n;
    f(n-1,sum);
    
}

int main(){
    int n;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int Nsum =f(n,sum);
    cout<<endl<<"The sum of first N numbers is : "<<Nsum;
    return 0;
}