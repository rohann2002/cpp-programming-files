#include<bits/stdc++.h>
using namespace std;

int main(){
    int userInput;
    char s ='*';
    cout<<"Enter the number of rows:"<<endl;
    cin>>userInput;

    for(int i=1; i <= userInput; i++){
        for (int star = 1; star <= i; star++)
        {
            cout<<s;
        }
        cout<<endl;
        
    }
}