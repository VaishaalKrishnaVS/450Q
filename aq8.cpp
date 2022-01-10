#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, -5, 8, -3, 4};
    int cs = a[0], ms = a[0];

    int n = 6;

    for (int i = 1; i < n; i++)
    {
        cs = max(cs + a[i], a[i]);
        ms = max(ms, cs);
    }
    cout << ms;
    return 0;
}