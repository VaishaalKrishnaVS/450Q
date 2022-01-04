#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> values;
        int i=0,j=0;
        while(i<n){
            values.insert(a[i]);
            i++;
        }
        while(j<m){
            values.insert(b[j]);
            j++;
        }
        return values.size();
    }
    
};