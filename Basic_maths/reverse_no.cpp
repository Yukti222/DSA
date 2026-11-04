#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count =0;
    while(n!=0){
        int digit=n%10;
        count = count*10+digit;
        n=n/10;
    }
    cout << "Reversed number: " << count << endl;
    return 0;
}