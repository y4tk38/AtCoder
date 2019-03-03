#include <iostream>
using namespace std;
#include <vector>

vector<int> v;

int dfs(int i, int m, int n){
    if (m < n) return 0;
    if (i <= 0) return 1;
    
    int ret = max(dfs(i-1,m,n),dfs(i-1,m/v[i-1],n) * v[i-1]);
    return ret;
}

int main(){
    int N,M;
    cin >> N >> M;

    

    int a = 2;
    int m = M;
    while (m >= a * a) {
        if (m % a == 0) {
            m /= a;
            v.push_back(a);
        } else {
            a++;
        }
    }

    v.push_back(m);

    int ans = dfs(v.size(),M,N);

    cout << ans << endl;

    return 0;

}