#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 5, 8, 4, 6};
    int length = 6;
    int k;
    cin >> k;

    sort(arr, arr + length);

    cout << arr[k - 1] << " " << arr[length - k];
}