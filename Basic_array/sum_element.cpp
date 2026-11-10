#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of array elements: "<<sum<<endl;
    return 0;
}