#include <iostream>
using namespace std;
int main(){
    int n,i,sum;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            sum=i;
            cout<<"divisors of "<<n<<"are:"<<sum<<endl;
        }
    }
}