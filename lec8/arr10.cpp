#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// intersection of 2 arrays

int main()
{
    vector<int> arr = {1, 2, 3};
    int s1 = 3;
    vector<int> brr = {5, 6, 7, 8};
    int s2 = 4;

    vector<int> res(s1 + s2);

    for (int i = 0; i < s1; i++)
    {
        res.push_back(arr[i]);
    }
    for (int i = 0; i < s2; i++)
    {
        res.push_back(brr[i]);
    }

    

    for (int i = 0; i < s1 + s2; i++)
    {
        cout << res[i] << " ";
    }
}