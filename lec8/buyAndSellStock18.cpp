#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// majority element

int main()
{
    vector<int> arr{7, 1, 5, 6, 4};

    int buy = arr[0];
    int maxProfit = 0;
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        if (buy > arr[i])
        {
            buy = arr[i];
        }
        else if (arr[i] - buy > maxProfit)
        {
            maxProfit = arr[i] - buy;
        }
    }

    cout << maxProfit;
}