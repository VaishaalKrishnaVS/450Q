#include <iostream>
using namespace std;
int main()
{
    int a[9] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = 9;
    int i = 0, j = n - 1;
    int temp;
    while (i < j)
    {
        if (a[i] < 0)
        {
            i++;
        }
        else if (a[j] > 0)
            j--;
        else if (a[j] < 0 || a[i] > 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for (int k = 0; k < 9; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}