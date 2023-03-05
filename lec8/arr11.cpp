#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// intersection of 2 arrays

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
                brr[j] = -1;
                res.push_back(arr[i]);
            }
        }
    }

    for (auto value : res)
    {
        cout << value << " ";
    }
}