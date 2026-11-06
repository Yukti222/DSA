// writing name for 5 times using recursion
#include <iostream>
using namespace std;
int count = 0;
void name(int count, string your_name){
    if (count == 5){
        return;
    }
    cout<< your_name<<endl;
    count++;
    name(count, your_name);
    return;
}
int main(){
    string your_name;
    cout<<"Enter your name: ";
    cin>>your_name;
    name(0, your_name);
    return 0;
}