#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,6,9,15,29,35}; //non decreasing
    int n = sizeof(arr)/sizeof(int);
    int key=9;
    int index=binarysearch(arr,n,key);
    if(index!=-1){
        cout << key << " is present at index " << index;
    }
    else{
        cout << key << "is not found" << endl;
    }
    return 0;
}