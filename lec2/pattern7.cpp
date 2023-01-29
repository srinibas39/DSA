#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Row" << endl;
    int n;
    cin >> n ;

    for (int row = 0; row < n; row++)
    {
        for (int col = n; col > row; col--)
        {
            cout << (n-col) + 1 << " ";
        }
        cout << endl;
    }
}



