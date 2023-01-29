#include <iostream>
using namespace std;
int main()
{

    cout << "Enter Row" << endl;
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        if (row == 0 || row == n - 1)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int i = 1; i < 4; i++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}