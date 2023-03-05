#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// union  of 2 arrays using duplicates

int main()
{
    vector<int> arr{1, 2, 3, 4, 6, 8};
    vector<int> brr{3, 4, 10};

    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        res.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
        {

            res.push_back(brr[i]);
        }
    }

    for (auto value : res)
    {
        cout << value << " ";
    }
}