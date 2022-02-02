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
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        int j = 1;
        for (int i = 0; i < n; i++)
        {
                if (a[i] % 2 == 0)
                {
                        while (a[j] % 2 == 0)
                        {
                                j += 2;
                        }
                        if (j < n)
                                swap(a[i], a[j]);
                }
        }

        for (auto x : a)
                cout << x << " ";

        return 0;
}
