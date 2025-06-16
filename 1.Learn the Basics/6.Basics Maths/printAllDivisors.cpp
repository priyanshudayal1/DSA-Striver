#include<iostream>
using namespace std;

int main(){
    int num=36;
    for (int i=2;i<=num;i++){
        if (num%i==0){
            cout<<i<<' ';
        }
    }
    return 0;
}