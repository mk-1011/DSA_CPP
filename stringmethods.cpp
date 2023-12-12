#include<iostream>
using namespace std;

int main(){
    char a[1000]="apple";
    char b[1000];
    cout << strlen(a)<<endl;//length
    strcpy(b,a);//destination, source (a->b)
    cout << b << endl;
    cout << strcmp(a,b) <<endl;//compare 0 if same otherwise a positive or a negative value
    char hi[]="hello";
    char name[]="manasa";
    strcpy(b,strcat(hi,name));//concatenate
    cout << b << endl;
}