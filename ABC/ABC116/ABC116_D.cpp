#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;

int N, K;
int t[100010];
ll  d[100010];
 
typedef tuple<ll, int> sushi;
vector<sushi> V;
priority_queue<sushi, vector<sushi>, greater<sushi>> Q;
int cnt[100010];

int main() {
    cin >> N >> K;
    for (auto i = 0; i < N; i++)
    {
        cin >> t[i] >> d[i];
        t[i]--;
        V.push_back(sushi(d[i], t[i]));
    }
    sort(V.begin(), V.end());
    reverse(V.begin(), V.end());
    fill(cnt, cnt + N, 0);
  
    ll ans = 0;
    ll tans = 0;
    for (auto i = 0; i < K; i++)
    {
        ll cost = get<0>(V[i]);
        int val = get<1>(V[i]);
        tans += cost;
        cnt[val]++;
        Q.push(V[i]);
    }
    ll v = 0;
    for (auto i = 0; i < N; i++)
    {
        if (cnt[i] > 0)
        {
             v++;
        }
    }
    ans = tans + v * v;
    for (auto i = K; i < N; i++)
    {
        ll cost = get<0>(V[i]);
        int val = get<1>(V[i]);
        if (cnt[val] == 0)
        {
            while (!Q.empty())
            {
                ll cost_q = get<0>(Q.top());
                int val_q = get<1>(Q.top());
                Q.pop();
                if (cnt[val_q] >= 2)
                {
                    cnt[val_q]--;
                    tans -= cost_q;
                    cnt[val]++;
                    tans += cost;
                    v++;
                    ans = max(ans, tans + v * v);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}