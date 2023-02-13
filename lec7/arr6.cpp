#include <ioStream>
using namespace std;

// linear search

int main()
{

    int arr[5] = {10, 2, 13, 4, 5};

    cout << "Enter element" << endl;
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout << "Elemnent present";
    }
    else{
        cout << "Element not present";
    }
}