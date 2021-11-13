#include<iostream>
#include<string>

using namespace std;

typedef struct employee{
    char name;
    int eId;
    int salary;
}ep;

int main(){
    ep rohan;
    rohan.name = 'r';
    rohan.eId = 1001;
    rohan.salary = 50000;

    cout<<"The following data is to display the information of rohan: "<<endl;
    cout<<"The first letter of the name of the employee "<<rohan.name<<endl;
    cout<<"The id of the employee is "<< rohan.eId<<endl;
    cout<<"The salary of the employee is "<<rohan.salary<<endl;

    return 0;
}