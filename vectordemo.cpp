#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> arr; //-->size is zero
    vector<int> arr={1,2,10,12,15};
    arr.pop_back();//removes last element
    arr.push_back(25);//inserts at the end in constant time
    for(int i=0;i<arr.size();i++){
        cout <<arr[i]<<endl;
    }
    //insert,erase
    cout << arr.size() << endl;//no of elements
    cout << arr.capacity() << endl;//capacity of vector
    return 0;
    /*
    fill constructor
    vector<int> ar(10,7);10 elements each with a value 7
    */
}