#include <iostream>
using namespace std;
int main()
{
    int a[9] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = 9;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    for (int i : a)
        cout << i << " ";
    return 0;
}