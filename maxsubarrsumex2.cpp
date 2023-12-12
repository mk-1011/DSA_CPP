#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr) {
    int largest=INT_MIN;
    int cs=0;
    for(int i=0;i<arr.size();i++){
        cs=cs+arr[i];
        largest = max(largest, cs);
        if(cs<0){
            cs=0;
        }
    }
    return largest;
}