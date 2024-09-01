#include <bits/stdc++.h>
using namespace std;

    vector<int> sortedarray(vector<int> a, vector<int> b)
{
        int n1 = a.size();
        int n2 = b.size();
        vector<int> merged;
        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (a[i] <= b[j])
            {
                if (merged.size() ==0 || merged.back() != a[i])
                {
                    merged.push_back(a[i]);
                }
                i++;
            }
            else
            {
                if (merged.size() ==0 || merged.back() != b[j])
                {
                    merged.push_back(b[j]);
                }
                j++;
            }
            }
            while (i < n1)
            {
                if (merged.size() == 0 || merged.back() != a[i])
                {
                    merged.push_back(a[i]);
                }
                i++;
            }
            while (j < n2)
            {
                if (merged.size() == 0 || merged.back() != b[j])
                {
                    merged.push_back(b[j]);
                }
                j++;
            }
        

        return merged;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i =0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> merged = sortedarray(a,b);
    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i] << " ";
    }
    return 0;
}