#include <ioStream>
using namespace std;

int max(int a, int b, int c)
{
    int max;
    if (a > b && a > c)
    {
        max=a;
    }
    else if (b > a && b > c){
        max=b;
    }
    else{
        max=c;
    }
    return max;

}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    cout << max(a, b, c);
}