#include<bits/stdc++.h>
using namespace std;

    class employee{
        int a;
        int b;

        public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void getDataBySum(employee o1, employee o2){
            a = o1.a + o2.a;
            b = o1.a + o2.b;
        }
        void displayData(){
            cout<<a;
            cout<<b;
        }
    };

int main(){
    employee c1, c2, c3;
    c1.setData(3, 5);
    c1.displayData();

    c2.setData(7, 8);
    c2.displayData();

    c3.setData(c1, c2);
    return 0;
}