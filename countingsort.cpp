#include<iostream>
#include<vector>
using namespace std;

void countingsort(int a[],int n){
    //largest element
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
    }
    //count array
    vector<int> freq(largest+1, 0);
    //update frequency
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    //put back elements from freq to main
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
}

int main(){
    int arr[]={88,97,10,12,15,1,5,6,12,5,8};
    int n=sizeof(arr)/sizeof(int);
    countingsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}