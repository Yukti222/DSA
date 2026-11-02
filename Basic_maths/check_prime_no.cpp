#include <iostream>
using namespace std;
int main(){
    //true for prime and false for not prime
    int i,n;
    cout<<"enter a number to check whether it is prime or not";
    cin>>n;
    if (n<=1){
        return false;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"the number is not prime";
        }
    }
    cout<<"the number is prime";
    return 0;
}