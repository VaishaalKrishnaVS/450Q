class Solution
{
public:
    void sort012(int a[], int n)
    {
        int l, mid, h, temp;
        l = 0, mid = 0, h = n - 1;
        while (mid <= h)
        {
            if (a[mid] == 0)
            {
                temp = a[mid];
                a[mid] = a[l];
                a[l] = temp;
                l++;
                mid++;
            }
            else if (a[mid] == 1)
            {
                mid++;
            }
            else
            {
                temp = a[mid];
                a[mid] = a[h];
                a[h] = temp;
                h--;
            }
        }
    }
};