#include<iostream>
#include<string>
using namespace std;


bool isPalindrom(int i,string s){
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return isPalindrom(i+1,s);
};

int main(){
    string s="madsm";
    cout<<"Is palindrome : "<<isPalindrom(0,s);
    return 0;
}