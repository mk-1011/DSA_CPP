#include<iostream>
#include<cstring>
using namespace std;

int main(){
    /*char a[]="abcdef";
    cout << a << endl;
    cout << strlen(a) << endl; //number of characters visible
    cout << sizeof(a) << endl; //+1 because of null character
    char b[100];
    cin >> b;
    cout << b;
    //doesn't support spaces in between words
    
    char sent[1000];
    char temp=cin.get();
    int len=1;

    while(temp!='#'){
        len++;
        cout << temp;
        temp=cin.get();
    }
    cout << "Length " << len <<endl;*/

    char sentence[1000];
    char tem=cin.get();
    int l=0;
    while(tem!='#'){
        sentence[l++]=tem;
        tem=cin.get();
    }
    sentence[l]='\0';
    cout << "Length " << l <<endl;
    cout << sentence << endl;
}