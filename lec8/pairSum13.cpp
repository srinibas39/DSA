#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{10, 20, 30, 50, 60, 70};
    cout << "print target" << endl;;
    int target;
    cin >> target;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}