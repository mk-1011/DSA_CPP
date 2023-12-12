#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    for(int pos=0;pos<=n-2;pos++){
        int current = a[pos];
        int min_pos=pos;//index of min element
        //find the min
        for(int j=pos;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
            }
        }
        //swap
        swap(a[min_pos],a[pos]);
    }
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    for(auto x : arr){
        cout << x << ",";
    }
    cout << endl;
    return 0;
}