#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Procedural function (No class needed)
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = "";
    
    // Pehli string ke har ek character par loop
    for (int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];
        
        // Baaki saari strings ke saath character compare karna
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != c) {
                return prefix;
            }
        }
        prefix += c;
    }
    return prefix;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    
    // Seedha function call bina kisi object ke
    string result = longestCommonPrefix(strs);
    
    cout << "\nLongest Common Prefix: " << result << endl;
    
    return 0;
}