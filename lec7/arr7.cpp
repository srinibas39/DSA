#include <ioStream>
using namespace std;

// linear search

int main()
{

    int arr[10] = {1, 0, 1, 0, 0, 1, 0, 1, 1, 1};

    int nZeros = 0;
    int nOnes = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            nZeros++;
        }
        else if (arr[i] == 1)
        {
            nOnes++;
        }
    }

    cout << "count of Zeroes " << nZeros << endl;
    cout << "count of Ones " << nOnes << endl;
}