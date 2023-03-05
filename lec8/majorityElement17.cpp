#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// majority element

int main()
{
    // vector<int> arr{3, 4, 3, 2, 4, 4, 4, 4};
    vector<int> arr { 3, 3, 4, 2, 4, 4, 2, 4 };
    int n = arr.size();
    int index = -1;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > n / 2)
    {
        cout << arr[index] << "";
    }
    else
    {
        cout << "No majority element found";
    }
}