#include<iostream>
using namespace std;

    int factorial(long long a){
        if (a < 2)
        {
            return 1;
        }
        
        return a * factorial (a-1);
    }

int main(){
    long long userInput;

    cout<<"Enter the number:"<<endl;
    cin>>userInput;

    cout<<"The factorial of "<<userInput<<" is "<<factorial(userInput);
    return 0;
}