#include <iostream>
using namespace std;

bool findElement(int arr[3][3], int n, int m , int el)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == el)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Enter an Element";
    int n;
    cin >> n;

    bool res = findElement(arr, 3, 3, n);

    cout << res;
}