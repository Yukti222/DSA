// back tracking is a different way of thinking about recursion. It is a way to build up a solution incrementally, one piece at a time, and remove those solutions that fail to satisfy the constraints of the problem at any point of time (by time we mean when we have built up a partial solution that cannot possibly be completed to a valid solution).
// back tracking is a general algorithm for finding all (or some) solutions to some computational problems
// that incrementally builds candidates to the solutions, and abandons a candidate ("backtracks") as soon as it determines that the candidate cannot possibly be completed to a valid solution.
#include <iostream>
using namespace std;

void printNos(int i, int n) {
    // Base case: jab i, n se bada ho jaye toh ruk jao
    if (i > n) {
        return;
    }
    
    // Pehle recursive call karenge (aage badhenge 1 se n tak)
    printNos(i + 1, n);
    
    // Backtracking step: Jab function wapas aayega tab print hoga
    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    // i ko 1 se start karenge aur n tak bhejenge
    printNos(1, n);
    
    return 0;
}