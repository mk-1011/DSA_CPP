#include<iostream>
using namespace std;

int subarraysum(int arr[], int n){
    int largest = 0;
    int prefix[50];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum= i>0 ? prefix[j]-prefix[i-1] : prefix[j]; //ternary operator
            largest = max(largest, sum);
        }
        //cout << endl;
    }
    return largest;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout << subarraysum(arr,n) << endl;
    return 0;
}