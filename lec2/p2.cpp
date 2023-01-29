// if else if else

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Marks" << endl;

    int marks;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A Grade";
    }
    else if (marks >= 80)
    {
        cout << "B Grade";
    }
    else
    {
        cout << "Fail";
         
    }
}