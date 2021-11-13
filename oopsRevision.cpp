// write a program which will store the data of school and college info of different students and print in one place.

#include <iostream>
#include <string>
using namespace std;

class school
{
    string name;
    string schoolName;
    int classRoll, regNum, tenthPercentage;

public:
    void setData();
    void getData();
};

void school ::setData()
{
    cout << "Enter student's school info: " << endl;
    cout << "Enter name of the student:\t";
    cin >> name;
    cout << "Enter student's school name:\t";
    cin >> schoolName;
    cout << "Enter Roll Number:\t";
    cin >> classRoll;
    cout << "Registation Number:\t";
    cin >> regNum;
    cout << "10th percentage:\t";
    cin >> tenthPercentage;
}

void school ::getData()
{
    cout << "Student's Name:\t" << name << endl;
    cout << "School's Name:\t" << schoolName << endl;
    cout << "Class Roll Number:\t" << classRoll << endl;
    cout << "Registration Number:\t" << regNum << endl;
    cout << "10th Marks:\t" << tenthPercentage << endl;
}

class college
{
    string collegeName;
    int regId, DGPA, UniRoll, branch;

public:
    void inData();
    void opData();
};

void college ::inData()
{
    cout << "Enter College's Name:\t";
    cin >> collegeName;
    cout << "Branch's Name:\t";
    cin >> branch;
    cout << "Registration ID:\t";
    cin >> regId;
    cout << "University Roll Number:\t";
    cin >> UniRoll;
    cout << "DGPA:\t";
    cin >> DGPA;
}

void college ::opData()
{
    cout << "Name of the college:\t" << collegeName << endl;
    cout << "Name of branch:\t" << endl;
    cout << "Registration ID:\t" << endl;
    cout << "University Roll:\t" << endl;
    cout << "DGPA:\t" << endl;
}

int main()
{
    school student1, student2;
    college student3, student4;
    student1.setData();
    student3.inData();
    cout << endl;
    student2.setData();
    student4.inData();
    cout << endl;
    student1.getData();
    student4.opData();
    student2.getData();
    student4.opData();
    cout << endl;
    cout << "This is the total info, thanks for visiting.";

    return 0;
}