// if else

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Age" << endl;

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Your are eligible to vote";
    }
    else
    {
        cout << "Your are not eligible to vote";
    }
}