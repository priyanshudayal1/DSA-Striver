#include<iostream>
using namespace std;

long long int reverseNumber(long long int n)
{
	long long int rev=0;
	long long int rem=0;
	long long int tempNum;
	while (n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}

int main(){
    int num =121;
    int rev=reverseNumber(num);
    if (rev == num){
        cout<<"Palindrome";
    }else{
        cout<<"not a palindrome";
    }
    return 0;
}