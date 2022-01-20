#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define endl "\n"

void merge(int a[], int l, int mid, int r)
{
        vector<int> v;
        int i = l, j = mid + 1;

        while (i <= mid && j <= r)
        {
                if (a[i] <= a[j])
                {
                        v.push_back(a[i]);
                        i++;
                }
                else
                {
                        v.push_back(a[j]);
                        j++;
                }
        }
        for (int q = i; q <= mid; q++)
                v.push_back(a[q]);
        for (int q = j; q <= r; q++)
                v.push_back(a[q]);

        for (int i = l; i <= r; i++)
        {
                a[i] = v[i - l];
        }
        v.clear();
}
void mergesort(int a[], int l, int r)
{
        if (l < r)
        {
                int mid = (l + r) / 2;
                // cout << r;
                mergesort(a, l, mid);
                mergesort(a, mid + 1, r);
                merge(a, l, mid, r);
        }
}
signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        mergesort(a, 0, n - 1);
        int l = n / 3, r = (2 * n) / 3 - 1;
        while (l < r)
        {
                int k = a[l];
                a[l] = a[r];
                a[r] = k;
                l++;
                r--;
        }
        for (auto x : a)
                cout << x << " ";

        return 0;
}
