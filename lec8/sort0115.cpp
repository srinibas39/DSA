#include <ioStream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0, 0};
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {
        if (arr[l] == 0)
        {
            l++;
        }
        else if(arr[l]==1){
            swap(arr[l],arr[r]);
            r--;
        }
    }

    for(auto val : arr){
        cout <<" "<< val;
    }
    
}