#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

// left rotate by d elements

int main()
{

    vector<int> arr{1, 4, 5, 6, 3, 7, 8, 0};
    cout << "Enter Rotation no" << endl;
    int d;
    cin >> d;

    vector<int> temp(arr.size());
    int k = 0;

    for (int i = d; i < arr.size(); i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}