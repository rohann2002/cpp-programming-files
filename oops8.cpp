#include<bits/stdc++.h>
using namespace std;

    int userInput;

    class employee{
        int eId;
        string name;
        float salary;

        public:
        void setData(void);
        void getData(void);
    };
    void employee :: setData(){
        cout<<"Enter the name of the employee:"<<endl;
        cin>>name;
        cout<<"Enter the eId:"<<endl;
        cin>>eId;
        cout<<"Enter the salary of the employee:"<<endl;
        cin>>salary;
    }
    void employee :: getData(){
        cout<<"Name of the employee:\t"<<name<<endl;
        cout<<"Employee's ID:\t"<<eId<<endl;
        cout<<"Employee's salary:\t"<<salary<<endl;
    }

int main(){
    cout<<"Enter the number of employee:\t";
    cin>>userInput;
    employee google[userInput];
    for (int i = 0; i < userInput; i++)
    {
        google[i].setData();
    }
    
    for (int j = 0; j < userInput; j++)
    {
        google[j].getData();
    }
    
    return 0;
}