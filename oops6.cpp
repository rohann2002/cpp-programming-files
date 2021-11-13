#include<bits/stdc++.h>
using namespace std;

    
    typedef struct employee{
        int eId;
        int salary;
        
    }ep;

            

int main(){

    ep rohan;
    cout<<"Enter the id of the employee: ";
    cin>>rohan.eId ;
    cout<<"Enter the salary of the employee: ";
    cin>>rohan.salary;
    cout<<"The ID number of the employee is: "<<rohan.eId<<endl;
        cout<<"the salary of the employee is: "<<rohan.salary<<endl;
        
        
        
    return 0;
}