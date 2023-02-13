#include <ioStream>
#include <limits.h>
using namespace std;

// print extreme in an array

void extreme(int arr[], int size)
{

    int lo = 0;
    int hi = size - 1;

    while (true)
    {

        if (lo > hi)
        {
            break;
        }
        cout << arr[lo] << " ";
        cout << arr[hi] << " ";
        lo++;
        hi--;
    }
}

int main()
{

    int arr[6] = {1, 15, 8, 6, 10, 12};
    extreme(arr, 6);
}