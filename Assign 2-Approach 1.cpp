#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define endl "\n"
#define mod 1000000007
signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n;
        cin >> n;
        int a[n], odd[n / 2], even[n / 2];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        int k1 = 0, k2 = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] % 2)
                        odd[k1++] = a[i];
                else
                        even[k2++] = a[i];
        }

        for (int i = 0; i < n; ++i)
        {
                if (i % 2)
                        a[i] = even[--k2];
                else
                        a[i] = odd[--k1];
        }
        for (auto x : a)
                cout << x << " ";

        return 0;
}
