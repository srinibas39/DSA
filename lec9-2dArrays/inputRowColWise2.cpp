#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];

    // row wise
    cout << "Row wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Coloumn Wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
        cout << endl;
    }
}