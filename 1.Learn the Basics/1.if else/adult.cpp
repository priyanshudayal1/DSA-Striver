
#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    if(age>=18){
        cout<<"\nYou are an Adult.";
    }
    else{
        cout<<"\nYou are not an Adult.";
    }
    return 0;
}