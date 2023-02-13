#include <ioStream>
#include <limits.h>
using namespace std;

//  Reverse an array

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int size)
{
    int lo = 0;
    int hi = size - 1;
    int temp;

    while (lo <= hi)
    {
        temp = arr[lo];
        arr[lo] = arr[hi];
        arr[hi] = temp;

        lo++;
        hi--;
    }

    printArray(arr, size);
}

int main()
{
    int arr[6] = {1, 15, 8, 6, 10, 12};
    reverse(arr, 6);
}