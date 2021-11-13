//program to keep a count of items in a shop and it's price.

#include<iostream>
using namespace std;

    class shop{
        int itemId[100];
        int itemPrice[100];
        int counter;

        public:
            void setdata(void);
            void displayData(void);
            void initcounter(void);
    };

    void shop :: initcounter(void){counter = 0;};

    void shop :: setdata(void){
        cout<<"Enter the Id of item:\t";
        cin>>itemId[counter];
        cout<<"Enter the price of ItemId "<<itemId[counter]<<":\t";
        cin>>itemPrice[counter];
        counter++;
    }

    void shop :: displayData(void){
        for (int i = 0; i < counter; i++)
        {
            cout<<"The price of Item ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
        }
        
    }

int main (){
    
    shop item;
    
    int numOfItem;
    item.initcounter();
    cout<<"Enter the total number of Items: ";
    cin>>numOfItem;

    for (int x = 0; x < numOfItem; x++)
    {
        item.setdata();
    }
    item.displayData();

    return 0;
}