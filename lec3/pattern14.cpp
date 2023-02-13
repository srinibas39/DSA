#include <ioStream>
using namespace std;

int main()
{
    cout << "Enter n" << endl;
    int n;
    cin >> n;

    // upper part
    for (int row = 0; row < n; row++)
    {
        for (int num = 0; num < row + 1; num++)
        {
            if (num == row)
            {
                cout << row + 1;
            }
            else
            {
                cout << row + 1 << "*";
            }
        }
        cout << endl;
    }
    // lower part
    for (int row = 0; row < n; row++)
    {
        for (int num = n; num > row; num--)
        {
            if (num == row + 1)
            {
                cout << n - row;
            }
            else
            {
                cout << n - row << "*";
            }
        }
        cout << endl;
    }
}
