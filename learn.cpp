//       *
//     * * *
//   * * * * *
// * * * * * * *

#include<iostream>
using namespace std;

int main(){
    int userInput, space, star;
    cout<<"Enter the number of rows: ";
    cin>>userInput;
    
    for (int i = 0; i <= userInput; i++)
    {
        for ( space = 0; space < userInput - i; space++)
        {
            cout<<"  ";
        }
        for ( star = 0; star < 2*i-1; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    
}