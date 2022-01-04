#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int min, max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (min > A[i])
            min = A[i];
        if (max < A[i])
            max = A[i];
    }
    cout << min << " " << max;
    return 0;
}