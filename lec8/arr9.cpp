#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

//  Unique Element of an array

int findUniqueElement(vector<int> arr)
{
    int res=0;
    for (int i = 0; i < arr.size(); i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    cout << "Enter size of array" << endl;
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int uniqueElement = findUniqueElement(arr);

    cout << "Unique element is " << uniqueElement << endl;
}