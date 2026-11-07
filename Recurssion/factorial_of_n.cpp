#include <iostream>
using namespace std;
void multiple(int i, int current_multiple){
    if(i<1){
        cout<<"the multiply is:"<<current_multiple<<endl;
        return;
    }
    multiple(i-1,current_multiple*i);
}
int main(){
    int n;
    cout<<"enter the number to find the factorial of n: ";
    cin>>n;
    multiple(n,1);
}