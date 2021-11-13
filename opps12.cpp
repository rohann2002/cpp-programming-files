#include<iostream>
using namespace std;

    int firstReal, secondReal, compFirst, compSecond;

class Complex;

class calculator{
    public:
    int add(int a , int b){
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumComplex(Complex, Complex);
     
};
class Complex{
    int a, b;
    friend int calculator :: sumRealComplex(Complex o1, Complex o2);
    friend int calculator :: sumComplex(Complex o1, Complex o2);

    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(){
        // cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        cout<<"Both the real numbers entered by you is : "<<firstReal<<", "<<secondReal<<endl;
        cout<<"Both the complex numbers entered by you is : "<<compFirst<<", "<<compSecond<<endl;
    
    }

};

int calculator :: sumRealComplex(Complex o1, Complex o2){
        return (o1.a + o2.a);
}
int calculator :: sumComplex(Complex o1, Complex o2){
        return (o1.b + o2.b);
}

void setData(){
    cout<<"Enter the first real number: ";
    cin>>firstReal;
    cout<<"Enter the first complex number: ";
    cin>>secondReal;
    cout<<"Enter the second real number: ";
    cin>>compFirst;
    cout<<"Enter the second complex number: ";
    cin>>compSecond;
}

int main(){

    Complex c1, c2;
    
    setData();
    c1.setNumber(firstReal, secondReal);
    c2.setNumber(compFirst, compSecond);
    c1.printNumber();
    calculator calc;
    int real = calc.sumRealComplex(c1, c2);
    int comp = calc.sumComplex(c1, c2);
    cout<<"The sum of complex + real number is: "<<real<<" + "<<comp<<"i"<<endl;


    return 0;
}