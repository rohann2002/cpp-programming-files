#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void readInput(void);
    void chkBin(void);
    void chngBin(void);
    void displayBin(void);
};

void binary ::readInput()
{
    cout << "Enter your binary number:\t";
    cin >> s;
    chkBin();
}

void binary ::chkBin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Entered binary number is incorrect." << endl;
            exit(0);
        }
    }
}

void binary ::chngBin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::displayBin()
{
    cout << "Displaying the binary number " << s << endl;
}

int main()
{

    binary b;
    b.readInput();
    // b.chkBin();
    cout << "Before changing the number ";
    b.displayBin();
    b.chngBin();
    b.displayBin();

    return 0;
}