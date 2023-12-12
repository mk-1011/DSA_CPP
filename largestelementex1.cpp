#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}