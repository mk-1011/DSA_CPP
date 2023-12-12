#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    pair<int, int> p;
    p.first=0;
    p.second=0;
    int dif = INT_MAX;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if((arr[i]+arr[j])==x){
                p.first=arr[i];
                p.second=arr[j];
            }
            else{
                if((x-(arr[i]+arr[j]))<0){
                    if(((arr[i]+arr[j])-x)<dif){
                        p.first=arr[i];
                        p.second=arr[j];
                        dif=((arr[i]+arr[j])-x);
                    }
                }
                else{
                    if((x-(arr[i]+arr[j]))<dif){
                        p.first=arr[i];
                        p.second=arr[j];
                        dif=(x-(arr[i]+arr[j]));
                    }
                }
            }
        }
    }
    return p;
}