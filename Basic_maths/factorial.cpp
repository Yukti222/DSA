#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter a number";
    cin>>n;
    while(n!=0){
        fact*=n;
        n--;
    }
    cout<<"factorial of a number is "<<fact<<endl;
}