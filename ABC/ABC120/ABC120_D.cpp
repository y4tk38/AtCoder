#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

//--------Union-Find木---------
vector<int> par; // 親
vector<int> rnk; // 深さ

// Union-Find木の初期化
void init(int n) {
  par  = vector<int>(n);
  rnk = vector<int>(n);
  for (int i = 0; i < n; i++) {
    par[i] = i;
    rnk[i] = 0;
  }
}

// 木の根を求める
int find(int x) {
  if (par[x] == x) {
    return x;
  } else {
    return par[x] = find(par[x]);
  }
}

// xとyの属する集合を併合
void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (rnk[x] < rnk[y]) {
    par[x] = y;
  } else {
    par[y] = x;
    if (rnk[x] == rnk[y]) rnk[x]++;
  }
}

// xとyが同じ集合に属するか否か
bool same(int x, int y) {
  return find(x) == find(y);
}
//-------------------------

int main() {
  // 入力
  int N, M;
  cin >> N >> M;
  
  vector<int> x(N), y(N);
  
  for (int i = 0; i < M; i++) {
    cin >> x[i] >> y[i];
  }
  
  // Union-Find木の初期化
  init(N);


  long long ans[M];
  long long total_num = N*(N-1)/2;
  for(int i=M; i<0; i--){
      unite(x[i],y[i]);
      
      ans[i] = total_num;
  }

  for (int i = 0; i < M; i++) {
    cout << ans[i] << endl;
  }


}