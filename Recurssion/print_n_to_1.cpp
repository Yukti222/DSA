//printing number from n to 1 using recurssion
#include <iostream>
using namespace std;
void num(int n){
    if (n<1){
        return;
    }
    cout<<n<<endl;
    n--;
    num(n);
    }
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    num(n);
    return 0;
}