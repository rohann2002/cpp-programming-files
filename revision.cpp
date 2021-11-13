#include<iostream>

using namespace std;

    int userInput , i;
    int arr[1000];
void accSort(void);
void desSort(void);
void addElem(void);
void delElem(void);
void otherArr(void);
// #define MAX 1000;
int main(){

    cout<<"Enter the array length here(NOTE MAX LIMIT IS 1000): "<<endl;
    cin>>i;
    cout<<"Enter the array here: "<<endl;
    for (int x = 0; x < i; x++)
    {
        cin>>arr[x];
    }
    cout<<"Enter the number to impliment the commands: "<<endl;
    cout<<"1. Sorting Array accending. "<<endl;
    cout<<"2. Sorting Array desending. "<<endl;
    cout<<"3. Add more elements in Array. "<<endl;
    cout<<"4. Delete elements of Array. "<<endl;
    cout<<"5. Enter another Array."<<endl;
    cout<<"6. Exit."<<endl;
    cout<<endl<<endl;
    cout<<"Choose the operation to impliment: ";
    cin>>userInput;

    switch (userInput)
    {
    case 1:
        accSort();
        break;
    case 2:
        desSort();
        break;
    case 3:
        addElem();
        break;
    case 4:
        delElem();
        break;
    case 5:
        otherArr();
        break;
    case 6:
        exit(0);
        break;
    default:
        cout<<"Invalid Input. Program Terminated."<<endl;
        break;
    }
    
    return 0;
}
void accSort(){
    for (int a = 0; a < i; a++)
    {
        for (int b = (a + 1); b < i; b++)
        {
            if (arr[a]>arr[b])
            {
                int tem = arr[a];
                arr[a] = arr[b];
                arr[b] = tem;
            }
            
        }
        
    }
    for (int c = 0; c < i; c++)
    {
        cout<<arr[c]<<" ";
    }
    
    
}
void desSort(){

}
void addElem(){

}
void delElem(){

}
void otherArr(){

}