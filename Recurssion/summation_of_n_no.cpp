#include <iostream>
using namespace std;
void sum(int count,int n){
    if (n<1){
        cout<<"The sum of first n natural numbers is: "<<count<<endl;
        return;
    }
    sum(count+n,n-1);
}
int main(){
    int count,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    sum(0,n);
}