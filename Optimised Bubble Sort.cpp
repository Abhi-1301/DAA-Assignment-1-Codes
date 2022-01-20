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
	for (int i = 0; i < n; i++)
	{
		bool check = true;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				check = false;
				int k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
		if (check)
		{
			break;
		}
	}
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
