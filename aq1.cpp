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
    //reversing the array first approach
    int B[n];
    int i, j;
    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (int k = 0; k < n; k++)
    {
        A[k] = B[k];
    }
    cout << "The reversed array: \n";
    for (int k = 0; k < n; k++)
    {
        cout << A[k] << " ";
    }
    //second approach
    int i, j, temp;
    i = 0, j = n - 1;
    while (i < j)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
    cout << "The reversed array:\n";
    for (int k = 0; k < n; k++)
    {
        cout << A[k] << " ";
    }
    //You can use any one of the approaches.
    return 0;
}