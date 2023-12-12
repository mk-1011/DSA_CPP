#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    //string s = "hello world";-->dynamic array
    //string s("hello world");//call to the constructor to create this object
    /*string s;
    getline(cin, s,'.');
    for(char ch : s){
        cout << ch << ",";
    }
    cout << s << endl;*/
    //array of strings
    int n=5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin, temp,'.');
        sarr.push_back(temp);
    }
    for(string x:sarr){
        cout << x << "," << endl;
    }

}