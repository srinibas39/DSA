#include <ioStream>
#include <limits.h>
using namespace std;

// find min in an array

int minimum(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int arr[5] = {1, 15, 8, 6, 10};
    int min = minimum(arr, 5);
    cout << "Min is " << min;
}