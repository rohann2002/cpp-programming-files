#include<iostream>
using namespace std;




class Student {
    private :
     int regNum, classRoll, due;

    public :
     int  classRoom, Teacher;
     char firstLetter;
     void getPrivate(int a, int b, int c);
     void getInfo(){
         cout<<"The registration number of the student is "<<regNum<<endl;
         cout<<"The class roll number of the student is "<<classRoll<<endl;
         cout<<"The total due amount of the student in fee or fine in school is "<<due<<endl;
         cout<<"The first letter of the name of the student is "<<firstLetter<<endl;
         cout<<"The class room of the studen is "<<classRoom<<endl;
         cout<<"The name code of the class teacher is "<<Teacher<<endl;
     }

    

};

 void Student :: getPrivate(int a, int b, int c){
         regNum = a;
         classRoll = b;
         due = c;
     }


int main(){

    Student rohan;
    rohan.getPrivate(12, 22, 42500);
    rohan.firstLetter = 'R';
    rohan.classRoom = 43;
    rohan.Teacher = 22332;
    
    char x;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    
    cout<<"Please enter the registration number of the student:\t";
    cin>>x;

    if (x == rohan.firstLetter)
    {
        rohan.getInfo();
    }
    else{
        cout<<"Sorry, no result found."<<endl;
    }

    


    return 0;
}