//printing number from 1 to n using resurssion
#include <iostream>
using namespace std;
void num(int count, int n){
    if (count>n){
        return;
    }
    cout<<count<<endl;
    num(count+1, n);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    num(1, n);
    return 0;
}