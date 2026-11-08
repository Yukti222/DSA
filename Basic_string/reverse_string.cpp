#include <iostream>
using namespace std;
void reverse_string(int l, int r, string s){
    if(l>=r){
        cout<<"the reversed string is:"<<s<<endl;
      return; 
    }
    swap(s[l],s[r]);
    reverse_string(l+1,r-1,s);
}
int main(){
    string s;
    cout<<"enter your string to reverse:";
    cin>>s;
    reverse_string(0,s.length()-1,s);
}