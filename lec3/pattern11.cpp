#include <ioStream>
using namespace std;

int main()
{
    cout << "Enter Row" << endl;
    int n;
    cin >> n;

    // full pyramid
    for (int row = 0; row < n; row++)
    {
        for (int blank = n - 1; blank > row; blank--)
        {
            cout << " ";
        }
        for (int star = 0; star < row + 1; star++)
        {
            if (star == 0 || star == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // inverted full pyramid
    for (int row = 0; row < n; row++)
    {
        for (int blank = 0; blank < row; blank++)
        {
            cout << " ";
        }
        for (int star = 0; star < n - row; star++)
        {
            if (star == 0 || star == n-row-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        cout << endl;
    }
}