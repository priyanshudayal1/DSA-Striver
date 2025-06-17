#include<iostream>
using namespace std;

int factorial(int n,int fact){
    if (n==1) return fact;
    fact=fact*n;
    factorial(n-1,fact);
}

int main(){
    int n,fact;
    fact=1;
    cout<<"Enter a number :";
    cin>>n;
    int numFact=factorial(n,fact);
    cout<<"The factorial of "<<n<<" is : "<<numFact;
    return 0;
}