#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Bro num" << endl;

    int broNum;
    cin >> broNum;

    if (broNum == 0)
    {
        cout << "Winner";
    }
    else
    {
        cout << "Loser";
    }
}