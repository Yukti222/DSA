#include <iostream>
using namespace std;

   // method 1 (by making 3rd variable)

   int main (){
     int n=2;
     int y = 5;
     cout << n << " " << y << endl;
     int temp = n ;
     n = y;
     y= temp;
     cout << n << " " << y << endl ;
     return 0;
   }

    
   // method 2 (without using 3rd variable)

    int main2 (){
      int a = 12;
      int b = 45;
      cout << a << " " << b << endl ;
      a = a+b ;
      b = a- b ;
      a= a - b;
      cout << a << " " << b << endl ;
      return 0 ;
    }

    