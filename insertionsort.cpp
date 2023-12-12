#include<iostream>
using namespace std;

void insertionsort(int a[],int n){
    for(int i=1; i<=n-1;i++){
        int current = a[i];
        int prev = i-1;
        //loop to find the right index where the current should be inserted
        while(prev>=0 and a[prev]>current){
            a[prev+1]=a[prev];
            prev=prev-1;
        }
        a[prev+1]=current;
    }
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    for(auto x : arr){
        cout << x << ",";
    }
    cout << endl;
    return 0;
}