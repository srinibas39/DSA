#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[3][3] = {{5, 6, 9}, {7, 1, 2}, {4, 3, 12}};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout << "Max is " << max;
    cout << "Min is " << min;
}