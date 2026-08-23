#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter the number of rows";
    cin >> m;
    cout<< "enter the number of columns";
    cin >> n;
    for (int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}