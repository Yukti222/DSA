#include <iostream>
#include <string>

using namespace std;

string largeOddNum(string s) {
    int n = s.length();
    int lastOddIdx = -1;
    
    // Peeche se pehla odd digit dhoondh rahe hain
    for (int i = n - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 != 0) {
            lastOddIdx = i;
            break;
        }
    }
    
    if (lastOddIdx == -1) return "";
    
    int startIdx = 0;
    // Shuruat ke leading zeros ko hata rahe hain
    while (startIdx <= lastOddIdx && s[startIdx] == '0') {
        startIdx++;
    }
    
    if (startIdx > lastOddIdx) return "";
    
    return s.substr(startIdx, lastOddIdx - startIdx + 1);
}

int main() {
    string s;
    cout << "Enter a number string: ";
    cin >> s; // User se input lenge
    
    string result = largeOddNum(s);
    
    if (result == "") {
        cout << "No odd number found!" << endl;
    } else {
        cout << "Largest Odd Number: " << result << endl;
    }
    
    return 0;
}