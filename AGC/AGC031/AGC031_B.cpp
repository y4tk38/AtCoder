#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
#define MOD 1000000007
#define ADD(X,Y) ((X) = ((X) + (Y)%MOD) % MOD)
typedef long long i64; typedef vector<int> ivec; typedef vector<string> svec;

int N, C[202020];
i64 dp[202020];
int last[202020];

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		scanf("%d", C + i);
		--C[i];
	}
	for (int i = 0; i < 202020; ++i) last[i] = -1;
	dp[0] = 1;
	for (int i = 0; i < N; ++i) {
		dp[i + 1] = dp[i];
		if (last[C[i]] != -1 && last[C[i]] != i - 1) {
			ADD(dp[i + 1], dp[last[C[i]] + 1]);
		}
		last[C[i]] = i;
	}
	printf("%lld\n", dp[N]);
	return 0;
}
