#include<iostream>
using namespace std;

    class complex{
        int a, b;
        public:
        friend complex complexSum(complex o1, complex o2);
        void input(int x, int y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"The complex number entered by you is: "<<a<<" + "<<b<<"i"<<endl;
        }
    };

complex complexSum(complex o1, complex o2){
    complex o3;
    o3.input((o1.a+o2.a), (o2.b+o2.b));
    return o3;
}

int main(){
    complex c1, c2;
    c1.input(2 , 3);
    c1.display();

    c2.input(2 , 3);
    c2.display();
    return 0;
}