//read n strings and print the largest string.
//each string can have upto 1000 characters
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    /*while(n--){
        cin.getline(sentence,1000);
        cout<<sentence<<endl;
    }
    This will not run n times. it will run n-1 times.
    after entering n, the \n is also considered as a sentence by the cin.getline()
    so use cin.get to consume the \n
    */
    cin.get();
    char sentence[1000];
    char largest[1000];
    int largestlength=0;
    while(n--){
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if(len>largestlength){
            largestlength=len;
            strcpy(largest, sentence);
        }
    }
    cout << "Largest sentence is: " << largest<<endl;
    return 0;
}