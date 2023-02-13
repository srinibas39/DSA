#include <ioStream>
using namespace std;

int main()
{

    cout << "Enter rows";
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int ch = 0; ch < row + 1; ch++)
        {
            char res = ch + 65;
            cout << res;
        }
        for (int ch = row; ch > 0; ch--)
        {
            char res = (ch - 1) + 65;
            cout << res;
        }
        cout << endl;
    }
}