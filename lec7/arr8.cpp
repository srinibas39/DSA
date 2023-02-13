#include <ioStream>
#include <limits.h>
using namespace std;

// find max in an array

int maximum(int arr[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[5] = {1, 15, 8, 6, 10};
    int maxi = maximum(arr, 5);
    cout << "Max is " << maxi;
}