#include <ioStream>
using namespace std;

int sum(int a, int b)
{
    int result=a+b;
    return result;
}

int main()
{
    int a;
    cout << "Enter 1st num" << endl;
    cin >> a;

    int b;
    cout << "Enter 2nd num" << endl;
    cin >> b;

     cout << sum(a, b);
}