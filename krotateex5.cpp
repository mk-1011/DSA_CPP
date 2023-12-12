#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int temp;
    int n=a.size();
    while(k>0){
        temp=a[n-1];
        for(int i=n-1;i>-1;i--){
            a[i+1]=a[i];
        }
        a[0]=temp;
        k=k-1;
    }
    return a;
}