#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Row" << endl;
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int blank = 0; blank < row; blank++)
        {
            cout << " ";
        }
        for (int star = 0; star <= n - row - 1; star++)
        {
            cout << "* ";
        }
        cout << endl;

    }
}
