#include <iostream>
using namespace std;
int main(){
    int n,s;
    int a=0;
    cout<<"enter the number";
    cin>>n;
    while(n!=0){
    s=n%10;
    if (s>a){
     a=s;
    }
    n/=10;
    }
    cout<<"lagest digit "<<a<<endl;
}