// program to check whether the user input is binary of not.

#include<iostream>
#include<string>
using namespace std;

class binary{

    string s;

    public:
        void read(void);
        void chkBin(void);
};

void binary :: read(void){
    cout<<"Enter your binary number:\t";
    cin>>s;
}

void binary :: chkBin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrent binary format."<<endl;
            exit(0);
        }
        
        
    }
    
}

int main(){
    binary b;
    b.read();
    b.chkBin();

    return 0;
}