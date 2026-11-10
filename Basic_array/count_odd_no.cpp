#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elemnt in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element ";
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    cout<<"number of odd elements in the array: "<<count<<endl;
    return 0;
}