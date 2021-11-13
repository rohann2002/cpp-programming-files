//program to learn the uses of static variables.

#include<iostream>
using namespace std;

    class ep{
        int id;
        static int count; // we can't assign the value of count here it will through the syntex error;

        public:
             void setData(){
                 cout<<"Enter the id of Employee:\t";
                 cin>>id;
             }
             void getData(){
                 count++;
                 cout<<"The id of the employee number "<<count<<" is "<<id<<endl;
                
             }
             static void getCount(){
                 cout<<"The total number of count is "<<count<<endl;
             }
    };

    int ep :: count = 0; // if i don't assign the 0 value here then also the count will start with 0;

int main(){
    
    int Num;

    cout<<"Enter the total number of employee: ";
    cin>>Num;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    ep employee;




    for (int i = 0; i < Num; i++)
    {
        employee.setData();
        employee.getData();
    }

    

    employee.getCount();
    return 0;
}