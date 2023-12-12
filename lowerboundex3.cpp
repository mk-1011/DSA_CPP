#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val) {
    // your code goes here
    if(Val<A[0]){
        return -1;
    }
    int temp=0;
    for(int i=0;i<A.size();i++){
        if(Val>A[i]){
            temp=A[i];
        }
        if(Val==A[i]){
            return Val; 
        }
    }
    return temp;
}