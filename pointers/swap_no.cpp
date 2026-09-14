#include <iostream>
using namespace std;


void swap (int* a, int* b){
    int temp = *a;
    *a = *b ;
    *b = temp ;
}

int main (){
    int x,y;
    cout << " enter two numbers x and y to be swaped respectively " << endl ;
    cin >> x >> y;
    swap(&x, &y);
    cout << " after swapping x = " << x << " and y = " << y << endl ;
    return 0;
}