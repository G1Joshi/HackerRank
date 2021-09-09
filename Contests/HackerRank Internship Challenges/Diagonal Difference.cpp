#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
            {
                d1 += arr[i][j];
            }
            if (i == arr.size() - 1 - j)
            {
                d2 += arr[i][j];
            }
        }
    }
    int d = abs(d1 - d2);
    return d;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        vector<int> ar;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            ar.push_back(a);
        }
        arr.push_back(ar);
    }
    cout << diagonalDifference(arr);
    return 0;
}
