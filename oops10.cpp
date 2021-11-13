#include<iostream>
using namespace std;

    class complex{
        int a, b;
        int a1, b1;
        int x2, y2;
        public:
        void setNumber1(void);
        void setNumber2(void);
        void sum(void);
        void displaySum(void);
    };

    void complex :: setNumber1(){
        int x, y;
        cout<<"Enter the first real number:\t";
        cin>>x;
        cout<<"Enter the first imaginary number:\t";
        cin>>y;
        a = x;
        b = y;
    }
    void complex :: setNumber2(){
        int x1, y2;
        cout<<"Enter the second real number:\t";
        cin>>x1;
        cout<<"Enter the second imaginary number:\t";
        cin>>y2;
        a1 = x1;
        b1 = y2;
    }
    void complex :: sum(){
        x2 = a + a1;
        y2 = b + b1;
        
    }
    void complex :: displaySum(){
        cout<<x2<<" + "<<y2<<"i";
    }

int main(){
    complex x8;
    x8.setNumber1();
    x8.setNumber2();
    x8.sum();
    x8.displaySum();


    return 0;
}