// recurssion - where functiion calls itself
#include <iostream>
using namespace std;

void greet (){
    cout << " greetings everyone "<< endl;
    greet ();
}

int main (){
    greet();
    return 0;
}
