#include <iostream>
using namespace std;
// q.1- print names 5 times using recurssion
   
   int name (){
   int m;
    if (m<=5){
        return 0 ;
    }
    cout << n << endl;
    n++ ;
    name();
   }

    int main (){
        int n ;
        cout << "enter your name :" << endl;
        cin >> n ; 
        name();
    }