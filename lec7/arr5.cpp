#include <ioStream>
using namespace std;

int main()
{

    //  replace all the array elements by 1

    int arr[5] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}