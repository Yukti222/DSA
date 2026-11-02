#include <iostream>
using namespace std;
int main(){
    int sum=0,n,i;
    cout<<"enter a number to check for is it perfect";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"the number is perfect";
    }
    else{
        cout<<"the number is not perfect";
    }
    return 0;
}