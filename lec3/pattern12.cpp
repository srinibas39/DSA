#include <ioStream>
using namespace std;

int main()
{
    cout << "Enter Row" << endl;
    int n;
    cin >> n;

    // upper part
    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < n - row; star++)
        {
            cout << "*";
        }
        for (int blank = 0; blank < 2 * row + 1; blank++)
        {
            cout << " ";
        }
        for (int star = 0; star < n - row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower part
    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        // 2n=2r-1
        for (int blank = 0; blank < 2 * n - 2 * row - 1; blank++)
        {
            cout << " ";
        }
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
