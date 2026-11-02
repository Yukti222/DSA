#include <iostream>
using namespace std;
int main(){
    int n, sum = 0,j;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool isprime = true;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime == true) {
            cout << i << " is a prime number" << endl;
            sum++;
        }
    }
    cout << "Total prime numbers till " << n << " is: " << sum;
}