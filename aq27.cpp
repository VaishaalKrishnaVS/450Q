#include <iostream>
using namespace std;

int mul(int x, int arr[], int siz)
{
    int carry = 0;
    for (int i = 0; i < siz; i++)
    {
        int product = arr[i] * x + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    while (carry != 0)
    {
        arr[siz] = carry % 10;
        carry = carry / 10;
        siz++;
    }
    return siz;
}
void fact(int n)
{
    int arr[500];
    arr[0] = 1;
    int siz = 1;
    for (int x = 2; x <= n; x++)
        siz = mul(x, arr, siz);
    for (int i = siz - 1; i >= 0; i--)
        cout << arr[i];
}


int main()
{
    fact(6);
}