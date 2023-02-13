#include <ioStream>
using namespace std;

int main()
{

    int arr[500];

    //  taking size of arr;
    cout << "Enter size of array";
    int n;
    cin >> n;

    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // doubling the elements of the array
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << endl;
    }
}