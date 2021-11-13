#include<iostream>
using namespace std;

    class school{
        int regNum;
        int rollNum;
        public:
        string name;
        int classRoom;
        void setData();
        void setpData(void);
        void display(void);
        
    };

    void school :: setData(){
        cout<<"Enter the registration number of the student: ";
        cin>>regNum;
        cout<<"Enter the roll number of the student: ";
        cin>>rollNum;

    }
    void school :: setpData(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the class room of the student: ";
        cin>>classRoom;
    }
    void school :: display(){
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"The registration number of the student is: "<<regNum<<endl;
        cout<<"The roll number of the student is: "<<rollNum<<endl;
        cout<<"The class room number of the student is: "<<classRoom<<endl;
    }
    
int main(){

    school rohan;
    rohan.setpData();
    rohan.setData();
    rohan.display();

    
    return 0;
}