#include<iostream>
using namespace std;

void reversearray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}