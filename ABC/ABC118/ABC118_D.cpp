#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#include<string>
using namespace std;
#define mkp make_pair
#define veb vector<bool>
#define vel vector<long long>
#define vvel vector<vel>
#define vvvel vector<vvel>
#define pin pair<long long,long long>
int main() {
	int n, m;
	cin >> n >> m;
	vel a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vel ko{ 0,2,5,5,4,5,6,3,7,6 };
	vel dp(n + 10,-n);
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int k1 = ko[a[j]];
			dp[i + k1] = max(dp[i + k1], dp[i] + 1);
		}
	}
	int mn = n;
	while (mn > 0) {
		int x = 0;
		int nen = mn;
		for (int i = 0; i < m; i++) {
			int mi = ko[a[i]];
			if (mn >= mi) {
				if (dp[mn - mi] == dp[mn] - 1) { x = a[i]; nen = mn - mi; }
			}
		}
		mn = nen;
		cout << x;
	}
	cout << endl;
	return 0;
}


