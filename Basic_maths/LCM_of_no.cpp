#include <iostream>
using namespace std;
int main(){
    int n1, n2, lcm;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    lcm = (n1 > n2) ? n1 : n2; // Initialize lcm to the greater of the two numbers

    while (true) {
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            break; // Found the LCM
        }
        lcm++; // Increment lcm to check the next number
    }

    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
    return 0;
}